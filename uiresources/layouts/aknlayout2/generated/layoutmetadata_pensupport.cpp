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
// LayoutMetaData_pensupport generated by
// cdlcompiler instance ..\cdl\LayoutMetaData.cdl LayoutMetaData_pensupport
// This customisation implements the interface defined in LayoutMetaData.cdl

#include "layoutmetadata_pensupport.h"

namespace LayoutMetaData_pensupport
{

TBool IsPenEnabled()
	{
	return ETrue;
	}


const Layout_Meta_Data::SCdlImpl KCdlImpl = 
	{
	NULL, // &IsLandscapeOrientation,
	NULL, // &IsMirrored,
	NULL, // &IsScrollbarEnabled,
	NULL, // &IsAPAC,
	&IsPenEnabled,
	NULL, // &IsListStretchingEnabled,
	NULL, // &IsMSKEnabled,
	NULL, // &IsTouchPaneEnabled,
	};

} // end of namespace LayoutMetaData_pensupport
