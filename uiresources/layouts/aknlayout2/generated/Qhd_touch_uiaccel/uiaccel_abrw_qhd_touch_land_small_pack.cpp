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

// This customisation implements the interface defined in LayoutPack.cdl

#include "uiaccel_abrw_qhd_touch_land_small_pack.h"

namespace UiAccel_Abrw_Qhd_touch_land_Small_Pack
{

_LIT(name,"UiAccel_Abrw_Qhd_touch_land_Small_Pack");

SCdlSize const size = { 640, 360 };

TAknLayoutId const id = EAknLayoutIdABRW;

#include "aknlayoutscalable_abrw_hhl_c_qhd_lsc_tch_small.h"

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Abrw_hhl_c_qhd_lsc_tch_Small),
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomSmall;

TInt const styleHash = 0x35bdcd06;	// screen style QHDTOUCH

TInt const priority = 0;

TInt const appUid = 0x00000000;


const LayoutPack::SCdlImpl KCdlImpl = 
	{
	LIT_AS_DESC_PTR(name),
	(const TSize*)&size,
	&id,
	&contents,
	&zoom,
	&styleHash,
	&priority,
	&appUid,
	};

} // end of namespace UiAccel_Abrw_Qhd_touch_land_Small_Pack
