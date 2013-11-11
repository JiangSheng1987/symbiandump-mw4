/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
// CdlFontInst_qhd_touch generated by
// cdlcompiler instance \S60\mw\uiresources\layouts\aknlayout2\cdl\CdlFont.cdl CdlFontInst_qhd_touch
// This customisation implements the interface defined in CdlFont.cdl

#include "cdlfontinst_qhd_touch.h"
#include <gdi.h>
#include <fontids.hrh>
#include <avkon.hrh>

namespace CdlFontInst_qhd_touch
{

CDL_ARRAY_START(SIdMetricsPair, metricsArray)
	{
		// This handles the same range of font Ids that 
		// are handled in the current AknUtils::FontFromId()
		{ ELatinPlain12, EAknFontCategorySecondary,    12, EStrokeWeightNormal, 0, 0  },
        { ELatinBold12,  EAknFontCategoryPrimarySmall, 12, 1, 0, 0  },
        { ELatinBold13,  EAknFontCategoryPrimary,      13, 1, 0, 0  },
        { ELatinBold19,  EAknFontCategoryTitle,        19, 1, 0, 0 },
        { ELatinBold16,  EAknFontCategoryPrimary,      16, 1, 0, 0 },
        { ELatinBold17,  EAknFontCategoryPrimary,      17, 1, 0, 0 },
        { ELatinClock14, EAknFontCategoryDigital,      14, 1, 0, 0 },
        { EClockBold30,  EAknFontCategoryDigital,      30, 1, 0, 0 },
        { ENumberPlain5, EAknFontCategoryDigital,      5, 0, 0, 0 },
		{ EApacPlain12,  EAknFontCategorySecondary,    12, 0, 0, 0 },
		{ EApacPlain16,  EAknFontCategoryPrimary,      16, 0, 0, 0 },

        // Legacy UIDs
		{ KScreenFontUidAlp12, EAknFontCategorySecondary,      12, 0, 0, 0  },
        { KScreenFontUidAlb12, EAknFontCategoryPrimarySmall,   12, 1, 0, 0 },
        { KScreenFontUidAlb13, EAknFontCategoryPrimary,        13, 1, 0, 0  },
        { KScreenFontUidAlb19, EAknFontCategoryTitle,          19, 1, 0, 0 },
        { KScreenFontUidAlb16, EAknFontCategoryPrimary,        16, 1, 0, 0 },
        { KScreenFontUidAlb17, EAknFontCategoryPrimary,        17, 1, 0, 0 },
        { KScreenFontUidFont17, EAknFontCategoryPrimary,       17, 1, 0, 0 },
        { KScreenFontUidAco13, EAknFontCategoryUndefined,      13, 1, 0, 0 },
        { KScreenFontUidAco21, EAknFontCategoryUndefined,      21, 1, 0, 0 },
        { KScreenFontUidAcalc21, EAknFontCategoryDigital,      21, 1, 0, 0 },
        { KScreenFontUidAcb14, EAknFontCategoryDigital,        14, 1, 0, 0 },
        { KScreenFontUidAcb30, EAknFontCategoryDigital,        30, 1, 0, 0 },
        { KScreenFontUidAcp5, EAknFontCategoryDigital,         5, 0, 0, 0},
        { KScreenFontUidAlpi12, EAknFontCategoryUndefined,     12, 0, 1, 0 },
        { KScreenFontUidAlbi12, EAknFontCategoryUndefined,     12, 1, 1, 0 },
        { KScreenFontUidAlp13 , EAknFontCategorySecondary,     13, 0, 0, 0 },
        { KScreenFontUidAlpi13, EAknFontCategoryUndefined,     13, 0, 1, 0 },
        { KScreenFontUidAlbi13, EAknFontCategoryUndefined,     13, 1, 1, 0 },
        { KScreenFontUidAlp17, EAknFontCategorySecondary,      17, 0, 0, 0 },
        { KScreenFontUidAlb17b, EAknFontCategoryPrimary,       17, 1, 0, 0 },
        { KScreenFontUidAlbi17b, EAknFontCategoryUndefined,    17, 1, 1, 0 },
        { KScreenFontUidAlpi17, EAknFontCategoryUndefined,     17, 0, 1, 0 },
        
        // These layout Ids generated by scaled lay files. Values inspired by layout
        { ELatinPlain12+EScalableFontIdOffset, EAknFontCategorySecondary,      32, 0, 0, 0 }, 
        { ELatinBold12+EScalableFontIdOffset,  EAknFontCategoryPrimarySmall,   27, 1, 0, 0 }, 
        { ELatinBold13+EScalableFontIdOffset,  EAknFontCategoryPrimary,    36, 1, 0, 0 },
        { ELatinBold19+EScalableFontIdOffset,  EAknFontCategoryTitle,      41, 1, 0, 0 },
        { ELatinBold16+EScalableFontIdOffset,  EAknFontCategoryPrimary,    40, 1, 0, 0 },
        { ELatinBold17+EScalableFontIdOffset,  EAknFontCategoryPrimary,    42, 1, 0, 0 },
        { ELatinClock14+EScalableFontIdOffset, EAknFontCategoryDigital,    36, 1, 0, 0 },
        { EClockBold30+EScalableFontIdOffset,  EAknFontCategoryDigital,    72, 1, 0, 0 },
        { ENumberPlain5+EScalableFontIdOffset, EAknFontCategoryDigital,    14, 0, 0, 0 },
        { EApacPlain12+EScalableFontIdOffset,  EAknFontCategorySecondary,  32, 0, 0, 1 },
        { EApacPlain16+EScalableFontIdOffset,  EAknFontCategoryPrimary,    40, 0, 0, 1 },

        // Pseudo-generated font ids. These will be the ones really generated from toolchain
        { KAknLowestGeneratedFontId + KAknFontCategoryUndefined, EAknFontCategoryUndefined, 26, 0, 0, 0 },
        { KAknLowestGeneratedFontId + KAknFontCategoryPrimary, EAknFontCategoryPrimary,     29, 1, 0, 0 },
        { KAknLowestGeneratedFontId + KAknFontCategorySecondary, EAknFontCategorySecondary, 26, 0, 0, 0 },
        { KAknLowestGeneratedFontId + KAknFontCategoryTitle, EAknFontCategoryTitle,         33, 1, 0, 0 },
        { KAknLowestGeneratedFontId + KAknFontCategoryPrimarySmall, EAknFontCategoryPrimarySmall, 22, 1, 0, 0 },
        { KAknLowestGeneratedFontId + KAknFontCategoryDigital, EAknFontCategoryDigital,     29, 1, 0, 0 }
        
	}
    CDL_ARRAY_END(SIdMetricsPair, metricsArray);

CDL_ARRAY_START(SLogicalIdMetricsIdPair, logicalIdMapArray)
	{
        { EAknLogicalFontPrimaryFont,   KAknLowestGeneratedFontId + KAknFontCategoryPrimary },
        { EAknLogicalFontSecondaryFont, KAknLowestGeneratedFontId + KAknFontCategorySecondary  },
        { EAknLogicalFontTitleFont,     KAknLowestGeneratedFontId + KAknFontCategoryTitle },
        { EAknLogicalFontPrimarySmallFont, KAknLowestGeneratedFontId + KAknFontCategoryPrimarySmall },
        { EAknLogicalFontDigitalFont,   KAknLowestGeneratedFontId + KAknFontCategoryDigital }
	}
CDL_ARRAY_END(SLogicalIdMetricsIdPair, logicalIdMapArray);


const CDL_Font::SCdlImpl KCdlImpl = 
	{
	&metricsArray,
	&logicalIdMapArray,
	};

} // end of namespace CdlFontInst_qhd_touch
