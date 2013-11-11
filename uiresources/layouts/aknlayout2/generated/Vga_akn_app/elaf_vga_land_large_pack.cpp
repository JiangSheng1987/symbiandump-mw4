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

// Elaf_Vga_land_Large_Pack generated by
// AknLayoutCompiler -p..\generated\Vga_akn_app LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a Elaf_Vga_land_$ZOOM_Pack 640 480 -sVGA EAknLayoutIdELAF AknLayoutScalable_Elaf_pvl_av_vga_lsc_$ZOOM AknLayoutScalable_Elaf_pvl_apps_vga_lsc_$ZOOM CdlFontInst_vga displaylayoutmetricsinst_Vga -x .. 101fe2aa.dll Adaptation_Layer_AknLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_AppLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_SkinLayout -x .. 101fe2aa.dll LayoutMetaData_defaults -x .. 101fe2aa.dll LayoutMetaData_scrollbar -x .. 101fe2aa.dll LayoutMetaData_land -x .. 101fe2aa.dll LayoutMetaData_MSK
// This customisation implements the interface defined in LayoutPack.cdl

#include "elaf_vga_land_large_pack.h"

namespace Elaf_Vga_land_Large_Pack
{

_LIT(name,"Elaf_Vga_land_Large_Pack");

SCdlSize const size = { 640, 480 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_pvl_av_vga_lsc_large.h"
#include "aknlayoutscalable_elaf_pvl_apps_vga_lsc_large.h"
#include "cdlfontinst_vga.h"
#include "displaylayoutmetricsinst_vga.h"
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
#include "../layoutmetadata_land.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_msk.h"
_LIT(_content_DLL__101fe2aa_dll, "101fe2aa.dll");

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvl_av_vga_lsc_Large),
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvl_apps_vga_lsc_Large),
	LOCAL_CDL_REF(CdlFontInst_vga),
	LOCAL_CDL_REF(displaylayoutmetricsinst_Vga),
	{Adaptation_Layer_AknLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AknLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_AppLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AppLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_SkinLayout::KCdlInstanceId, Adaptation_Layer_SkinLayout::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_defaults::KCdlInstanceId, LayoutMetaData_defaults::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_scrollbar::KCdlInstanceId, LayoutMetaData_scrollbar::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_land::KCdlInstanceId, LayoutMetaData_land::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_MSK::KCdlInstanceId, LayoutMetaData_MSK::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomLarge;

TInt const styleHash = 0x0016a99c;	// screen style VGA

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

} // end of namespace Elaf_Vga_land_Large_Pack
