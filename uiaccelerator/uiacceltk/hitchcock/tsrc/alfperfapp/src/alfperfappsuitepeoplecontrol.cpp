/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies). 
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:  
*
*/


// INCLUDES
#include <alf/AlfEnv.h>
#include <alf/AlfTextureManager.h>
#include <alf/AlfTextStyleManager.h>
#include <alf/AlfTextStyle.h>
#include <alf/AlfGridLayout.h>
#include <alf/AlfImageVisual.h>
#include <alf/AlfTextVisual.h>

#include "AlfPerfAppSuitePeopleControl.h"
#include "AlfPerfAppSuiteHelper.h"
#include "AlfPerfAppSuiteTestCaseScroll.h"

// MACROS
#define KRgbSelectionBlue TRgb(0xE99517)

// ============================= MEMBER FUNCTIONS ==============================

CAlfPerfAppSuitePeopleControl::CAlfPerfAppSuitePeopleControl(CAlfPerfAppSuiteTestCaseScroll* aScrollControl)
    :iScrollControl(aScrollControl)
	{
	}
		
CAlfPerfAppSuitePeopleControl::~CAlfPerfAppSuitePeopleControl()
	{
#ifdef ENABLE_TEXTSTYLES
	CAlfTextStyleManager& styleManager = Env().TextStyleManager();
	for( TInt i=0; i<iTextStyles.Count(); i++ )
		{
		styleManager.DeleteTextStyle( iTextStyles[i] );
		}
	iTextStyles.Close();
#endif	
	}
		
void CAlfPerfAppSuitePeopleControl::ConstructL( 
	        CAlfEnv& aEnv, 
	        const TSize& aVisibleArea,
	        CAlfLayout* aParentLayout )
	{
	iLoadedImages = 0;
	iVisibleArea = aVisibleArea;
	
	CAlfControl::ConstructL( aEnv );
    
#ifdef ENABLE_TEXTSTYLES
	CreateTextStylesL();
#endif

	// Construct a base layout to add a background
	CAlfLayout* baseLayout = CAlfLayout::AddNewL( *this, aParentLayout );
	TAlfPerfAppSuiteHelper::AddGradientBrushL( baseLayout, KRgbBlack );
  	TAlfPerfAppSuiteHelper::AddDropShadowBrushL( baseLayout, KRgbGray, 1 );
	
   	// Create a grid layout as a base
  	CAlfGridLayout* gridLayout = CAlfGridLayout::AddNewL( *this, 1, 1, baseLayout );
  	gridLayout->SetPadding( 4 );

	// Add Header row
    RArray<TInt> rowHeights;
    rowHeights.Append( 100 );

    // Images
    _LIT( KImage1, "people.png" );
    
    CAlfTextureManager& textureManager = Env().TextureManager();
	aEnv.TextureManager().AddLoadObserverL( this );
    TAlfImage image( 
    		textureManager.LoadTextureL(
    		        KImage1,
    				EAlfTextureFlagRetainResolution,
    				KAlfAutoGeneratedTextureId ) );    	
	ConstructListHeaderL( gridLayout, image, _L("People"), rowHeights[rowHeights.Count()-1] );

    // Add list items
    rowHeights.Append( 120 ); // 1
    ConstructListItemL( gridLayout, _L("Top contacts"), _L("4 contacts"), rowHeights[rowHeights.Count()-1], ETrue );

    rowHeights.Append( 100 ); // 2
    ConstructListItemL( gridLayout, _L("All contacts"), _L("247 contacts"), rowHeights[rowHeights.Count()-1]  );

    rowHeights.Append( 80 ); // 3
    ConstructListItemL( gridLayout, _L("Communities"), _L("2 communities"), rowHeights[rowHeights.Count()-1] );
    
    rowHeights.Append( 80 ); // 4
    ConstructListItemL( gridLayout, _L("Work"), _L("40 contacts"), rowHeights[rowHeights.Count()-1] );
    
    rowHeights.Append( 80 ); // 5
    ConstructListItemL( gridLayout, _L("Friends"), _L("23 contacts"), rowHeights[rowHeights.Count()-1] );    
    
    rowHeights.Append( 80 ); // 6
    ConstructListItemL( gridLayout, _L("Enemies"), _L("1 contact"), rowHeights[rowHeights.Count()-1] );
    
    rowHeights.Append( 80 ); // 7
    ConstructListItemL( gridLayout, _L("Fans"), _L("2 contacts"), rowHeights[rowHeights.Count()-1] );
    
    rowHeights.Append( 80 ); // 8
    ConstructListItemL( gridLayout, _L("Haters"), _L("1 contact"), rowHeights[rowHeights.Count()-1] );
    
    rowHeights.Append( 80 ); // 9
    ConstructListItemL( gridLayout, _L("Lovers"), _L("2 contacts"), rowHeights[rowHeights.Count()-1] );
    
    rowHeights.Append( 80 ); // 10
    ConstructListItemL( gridLayout, _L("The Others"), _L("31"), rowHeights[rowHeights.Count()-1] );      

    // Apply rows
    gridLayout->SetRows( rowHeights.Count() );
    gridLayout->SetRowsL( rowHeights );

    // Set grid size
  	gridLayout->SetFlag( EAlfVisualFlagManualSize );
  	TAlfRealSize size;
  	size.iWidth = iVisibleArea.iWidth;
  	for( TInt i=0; i<rowHeights.Count(); i++ )
  		{
  		size.iHeight += rowHeights[i];
  		}
  	gridLayout->SetSize( size, 0 );

  	// Cleanup
  	rowHeights.Close();
	}

#ifdef ENABLE_TEXTSTYLES
void CAlfPerfAppSuitePeopleControl::CreateTextStylesL()
	{
	CAlfTextStyleManager& styleManager = Env().TextStyleManager();

    // Create text styles
    for( TInt i=0; i<ENumberOfTextStyles; i++ )
    	{
    	iTextStyles.Append( styleManager.CreatePlatformTextStyleL() );
    	}

    // NOTE: This will leak memory (S60 5.0 wk 20)
    // styles are destroyed in TextStyleManager destructor but this is not enough...

    CAlfTextStyle* style = NULL;
    style = styleManager.TextStyle( iTextStyles[ETextStyleHeader] );
    style->SetTextSizeInTwips( 180 );
    
    style = styleManager.TextStyle( iTextStyles[ETextStyleBig] );
    style->SetTextSizeInTwips( 160 );

    style = styleManager.TextStyle( iTextStyles[ETextStyleSmall] );
    style->SetTextSizeInTwips( 110 );
	}
#endif

const TInt KNumberOfImages = 1;
// -----------------------------------------------------------------------------
// Notify observers that all images have been loaded.
// -----------------------------------------------------------------------------
//
void CAlfPerfAppSuitePeopleControl::TextureLoadingCompleted(
        CAlfTexture& /*aTexture*/, TInt /*aTextureId*/, TInt aErrorCode)
    {
    // inform if there is any error
    if( aErrorCode != KErrNone )
        {
        iScrollControl->ImagesLoaded( aErrorCode );
        }
    
    iLoadedImages++;
    if (iLoadedImages == KNumberOfImages)
        {
        iScrollControl->ImagesLoaded( KErrNone );
        }
    }

CAlfGridLayout* CAlfPerfAppSuitePeopleControl::ConstructListItemLayoutL(
		CAlfLayout* aParentLayout,
		TInt aHeight,
		TBool aSelected,
		TBool aBorders )
	{
	// Define weights
   	RArray<TInt> columnWeights;
   	columnWeights.Append( 2 );
   	columnWeights.Append( 8 );

   	// Create a grid layout as a base
  	CAlfGridLayout* gridLayout = CAlfGridLayout::AddNewL(
  			*this, columnWeights.Count(), 1, aParentLayout );
	gridLayout->SetColumnsL( columnWeights );
	columnWeights.Close();


	// Set gradient brush if selected
    if( aSelected )
    	{
    	TAlfPerfAppSuiteHelper::AddGradientBrushL( gridLayout, KRgbSelectionBlue );
    	}

    // Set borders
    if( aBorders )
    	{
    	TAlfPerfAppSuiteHelper::AddBorderBrushL( gridLayout, KRgbDarkGray, 0, 2 );
    	}
        
    // Define the size manually
  	gridLayout->SetFlag( EAlfVisualFlagManualSize );
  	TAlfRealSize size;
  	size.iWidth = iVisibleArea.iWidth;
  	size.iHeight = aHeight;
  	gridLayout->SetSize( size, 0 );

	return gridLayout;
	}

CAlfGridLayout* CAlfPerfAppSuitePeopleControl::ConstructListItemTextLayoutL(
		CAlfLayout* aParentLayout )
	{
	// Define weights
   	RArray<TInt> rowWeights;
   	rowWeights.Append( 1 );
   	rowWeights.Append( 1 );

   	// Create a grid layout as a base
  	CAlfGridLayout* gridLayout = CAlfGridLayout::AddNewL(
  			*this, 1, rowWeights.Count(), aParentLayout );
	gridLayout->SetRowsL( rowWeights );
	rowWeights.Close();

	return gridLayout;
	}

void CAlfPerfAppSuitePeopleControl::ConstructListHeaderL(
		CAlfLayout* aParentLayout,
		const TAlfImage& aImage,
		const TDesC& aText,
		TInt aHeight )
	{
	// Create list item layout
    CAlfGridLayout* listItemLayout = 
    	ConstructListItemLayoutL( aParentLayout, aHeight, EFalse, EFalse );

    // Add image visual to first cell of list item layout
    CAlfImageVisual* imageVisual = CAlfImageVisual::AddNewL( *this, listItemLayout );
    imageVisual->SetImage( aImage );
    imageVisual->SetScaleMode( CAlfImageVisual::EScaleFitInside );

    // Add text visual to second
    CAlfTextVisual* textVisual = CAlfTextVisual::AddNewL( *this, listItemLayout );
    textVisual->SetTextL( aText );
    textVisual->SetAlign( EAlfAlignHLeft, EAlfAlignVCenter );
#ifdef ENABLE_TEXTSTYLES
    textVisual->SetTextStyle( iTextStyles[ETextStyleHeader] );
#endif
    textVisual->SetColor( KRgbWhite );
	}

void CAlfPerfAppSuitePeopleControl::ConstructListItemL(
		CAlfLayout* aParentLayout,
		const TDesC& aName,
		const TDesC& aDescription,
		TInt aHeight,
		TBool aSelected )
	{
	// Create list item layout
    CAlfGridLayout* listItemLayout =
    	ConstructListItemLayoutL( aParentLayout, aHeight, aSelected );

    // Add blank placeholder to first cell
    AppendVisualL( EAlfVisualTypeVisual, listItemLayout ); 

    // Create a new layout for text
    CAlfGridLayout* textLayout = ConstructListItemTextLayoutL( listItemLayout );

    // Add name visual to text layout
    CAlfTextVisual* nameVisual = CAlfTextVisual::AddNewL( *this, textLayout );
    nameVisual->SetTextL( aName );
    nameVisual->SetAlign( EAlfAlignHLeft, EAlfAlignVBottom );
#ifdef ENABLE_TEXTSTYLES
    nameVisual->SetTextStyle( iTextStyles[ETextStyleBig] );
#endif
    nameVisual->SetColor( KRgbWhite );

    // Add description to text layout
    CAlfTextVisual* descriptionVisual = CAlfTextVisual::AddNewL( *this, textLayout );
    descriptionVisual->SetTextL( aDescription );
    descriptionVisual->SetAlign( EAlfAlignHLeft, EAlfAlignVTop );
#ifdef ENABLE_TEXTSTYLES
    descriptionVisual->SetTextStyle( iTextStyles[ETextStyleSmall] );
#endif
    descriptionVisual->SetColor( KRgbGray );
	}

// end of file