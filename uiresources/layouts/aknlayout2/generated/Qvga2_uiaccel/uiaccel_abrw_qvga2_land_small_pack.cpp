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

// UiAccel_Abrw_Qvga2_land_Small_Pack generated by
// AknLayoutCompiler -p..\generated\Qvga2_uiaccel LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a UiAccel_Abrw_Qvga2_land_$ZOOM_Pack 320 240 -sQVGA2 EAknLayoutIdABRW AknLayoutScalable_Abrw_hql2_c_qvga2_lsc_$ZOOM
// This customisation implements the interface defined in LayoutPack.cdl

#include "uiaccel_abrw_qvga2_land_small_pack.h"

namespace UiAccel_Abrw_Qvga2_land_Small_Pack
{

_LIT(name,"UiAccel_Abrw_Qvga2_land_Small_Pack");

SCdlSize const size = { 320, 240 };

TAknLayoutId const id = EAknLayoutIdABRW;

#include "aknlayoutscalable_abrw_hql2_c_qvga2_lsc_small.h"

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Abrw_hql2_c_qvga2_lsc_Small),
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomSmall;

TInt const styleHash = 0x996f7aa7;	// screen style QVGA2

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

} // end of namespace UiAccel_Abrw_Qvga2_land_Small_Pack
