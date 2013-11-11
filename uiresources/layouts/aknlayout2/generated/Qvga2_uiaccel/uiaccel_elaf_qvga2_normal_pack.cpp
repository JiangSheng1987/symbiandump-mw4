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

// UiAccel_Elaf_Qvga2_Normal_Pack generated by
// AknLayoutCompiler -p..\generated\Qvga2_uiaccel LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a UiAccel_Elaf_Qvga2_$ZOOM_Pack 240 320 -sQVGA2 EAknLayoutIdELAF AknLayoutScalable_Elaf_hqp2_c_qvga2_prt_$ZOOM
// This customisation implements the interface defined in LayoutPack.cdl

#include "uiaccel_elaf_qvga2_normal_pack.h"

namespace UiAccel_Elaf_Qvga2_Normal_Pack
{

_LIT(name,"UiAccel_Elaf_Qvga2_Normal_Pack");

SCdlSize const size = { 240, 320 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_hqp2_c_qvga2_prt_normal.h"

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_hqp2_c_qvga2_prt_Normal),
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomNormal;

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

} // end of namespace UiAccel_Elaf_Qvga2_Normal_Pack
