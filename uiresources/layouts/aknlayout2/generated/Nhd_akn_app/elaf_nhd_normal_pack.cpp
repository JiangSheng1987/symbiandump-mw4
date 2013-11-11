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

// Elaf_Nhd_Normal_Pack generated by
// AknLayoutCompiler -p..\generated\Nhd_akn_app LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a Elaf_Nhd_$ZOOM_Pack 360 640 -sNHD EAknLayoutIdELAF AknLayoutScalable_Elaf_pnp_av_nhd_prt_$ZOOM AknLayoutScalable_Elaf_pnp_apps_nhd_prt_$ZOOM CdlFontInst_nhd displaylayoutmetricsinst_Nhd -x .. 101fe2aa.dll Adaptation_Layer_AknLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_AppLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_SkinLayout -x .. 101fe2aa.dll LayoutMetaData_defaults -x .. 101fe2aa.dll LayoutMetaData_scrollbar -x .. 101fe2aa.dll LayoutMetaData_MSK
// This customisation implements the interface defined in LayoutPack.cdl

#include "elaf_nhd_normal_pack.h"

namespace Elaf_Nhd_Normal_Pack
{

_LIT(name,"Elaf_Nhd_Normal_Pack");

SCdlSize const size = { 360, 640 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_pnp_av_nhd_prt_normal.h"
#include "aknlayoutscalable_elaf_pnp_apps_nhd_prt_normal.h"
#include "cdlfontinst_nhd.h"
#include "displaylayoutmetricsinst_nhd.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_aknlayout_elaf.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_applayout_elaf.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_skinlayout.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_defaults.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_scrollbar.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_msk.h"
_LIT(_content_DLL__101fe2aa_dll, "101fe2aa.dll");

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pnp_av_nhd_prt_Normal),
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pnp_apps_nhd_prt_Normal),
	LOCAL_CDL_REF(CdlFontInst_nhd),
	LOCAL_CDL_REF(displaylayoutmetricsinst_Nhd),
	{Adaptation_Layer_AknLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AknLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_AppLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AppLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_SkinLayout::KCdlInstanceId, Adaptation_Layer_SkinLayout::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_defaults::KCdlInstanceId, LayoutMetaData_defaults::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_scrollbar::KCdlInstanceId, LayoutMetaData_scrollbar::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_MSK::KCdlInstanceId, LayoutMetaData_MSK::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomNormal;

TInt const styleHash = 0x001491da;	// screen style NHD

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

} // end of namespace Elaf_Nhd_Normal_Pack
