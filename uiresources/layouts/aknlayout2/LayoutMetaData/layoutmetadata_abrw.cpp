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
// LayoutMetaData_abrw generated by
// cdlcompiler instance ..\cdl\LayoutMetaData.cdl LayoutMetaData_abrw
// This customisation implements the interface defined in LayoutMetaData.cdl

#include "layoutmetadata_abrw.h"

namespace LayoutMetaData_abrw
{

TBool IsMirrored()
	{
	return ETrue;
	}

const Layout_Meta_Data::SCdlImpl KCdlImpl = 
	{
	NULL, // &IsLandscapeOrientation,
	&IsMirrored,
	NULL, // &IsScrollbarEnabled,
	NULL, // &IsAPAC,
	NULL, // &IsPenEnabled,
	NULL, // &IsListStretchingEnabled,
	NULL, // &IsMSKEnabled,
	NULL, // &IsTouchPaneEnabled,
	};

} // end of namespace LayoutMetaData_abrw
