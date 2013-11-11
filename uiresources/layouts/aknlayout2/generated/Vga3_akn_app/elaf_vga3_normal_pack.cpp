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

// Elaf_Vga3_Normal_Pack generated by
// AknLayoutCompiler -p..\generated\Vga3_akn_app LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a Elaf_Vga3_$ZOOM_Pack 480 640 -sVGA3 EAknLayoutIdELAF AknLayoutScalable_Elaf_pvp3_av_vga3_prt_$ZOOM AknLayoutScalable_Elaf_pvp3_apps_vga3_prt_$ZOOM CdlFontInst_vga3 displaylayoutmetricsinst_Vga3 -x .. 101fe2aa.dll Adaptation_Layer_AknLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_AppLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_SkinLayout -x .. 101fe2aa.dll LayoutMetaData_defaults -x .. 101fe2aa.dll LayoutMetaData_scrollbar -x .. 101fe2aa.dll LayoutMetaData_MSK
// This customisation implements the interface defined in LayoutPack.cdl

#include "elaf_vga3_normal_pack.h"

namespace Elaf_Vga3_Normal_Pack
{

_LIT(name,"Elaf_Vga3_Normal_Pack");

SCdlSize const size = { 480, 640 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_pvp3_av_vga3_prt_normal.h"
#include "aknlayoutscalable_elaf_pvp3_apps_vga3_prt_normal.h"
#include "cdlfontinst_vga3.h"
#include "displaylayoutmetricsinst_vga3.h"
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
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvp3_av_vga3_prt_Normal),
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvp3_apps_vga3_prt_Normal),
	LOCAL_CDL_REF(CdlFontInst_vga3),
	LOCAL_CDL_REF(displaylayoutmetricsinst_Vga3),
	{Adaptation_Layer_AknLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AknLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_AppLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AppLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_SkinLayout::KCdlInstanceId, Adaptation_Layer_SkinLayout::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_defaults::KCdlInstanceId, LayoutMetaData_defaults::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_scrollbar::KCdlInstanceId, LayoutMetaData_scrollbar::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_MSK::KCdlInstanceId, LayoutMetaData_MSK::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomNormal;

TInt const styleHash = 0x0b98cb07;	// screen style VGA3

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

} // end of namespace Elaf_Vga3_Normal_Pack