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

// This is the main source file for a customisation DLL.
// It may be modified manually.

#include "elaf_vga4_touch_normal_pack.h"
#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_normal.h"
#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_normal.h"
#include "cdlfontinst_vga4_touch.h"
#include "displaylayoutmetricsinst_vga4_touch.h"
#include "elaf_vga4_touch_small_pack.h"
#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "elaf_vga4_touch_large_pack.h"
#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "abrw_vga4_touch_normal_pack.h"
#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "abrw_vga4_touch_small_pack.h"
#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "abrw_vga4_touch_large_pack.h"
#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "apac_vga4_touch_normal_pack.h"
#include "apac_vga4_touch_small_pack.h"
#include "apac_vga4_touch_large_pack.h"
#include "elaf_vga4_touch_land_normal_pack.h"
#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "elaf_vga4_touch_land_small_pack.h"
#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "elaf_vga4_touch_land_large_pack.h"
#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "abrw_vga4_touch_land_normal_pack.h"
#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "abrw_vga4_touch_land_small_pack.h"
#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "abrw_vga4_touch_land_large_pack.h"
#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "apac_vga4_touch_land_normal_pack.h"
#include "apac_vga4_touch_land_small_pack.h"
#include "apac_vga4_touch_land_large_pack.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(Elaf_Vga4_touch_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Normal),
		CDL_CUSTOMISATION(CdlFontInst_vga4_touch),
		CDL_CUSTOMISATION(displaylayoutmetricsinst_Vga4_touch),
		CDL_CUSTOMISATION(Elaf_Vga4_touch_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small),
		CDL_CUSTOMISATION(Elaf_Vga4_touch_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large),
		CDL_CUSTOMISATION(Abrw_Vga4_touch_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal),
		CDL_CUSTOMISATION(Abrw_Vga4_touch_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small),
		CDL_CUSTOMISATION(Abrw_Vga4_touch_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large),
		CDL_CUSTOMISATION(Apac_Vga4_touch_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Vga4_touch_Small_Pack),
		CDL_CUSTOMISATION(Apac_Vga4_touch_Large_Pack),
		CDL_CUSTOMISATION(Elaf_Vga4_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal),
		CDL_CUSTOMISATION(Elaf_Vga4_touch_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small),
		CDL_CUSTOMISATION(Elaf_Vga4_touch_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large),
		CDL_CUSTOMISATION(Abrw_Vga4_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal),
		CDL_CUSTOMISATION(Abrw_Vga4_touch_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small),
		CDL_CUSTOMISATION(Abrw_Vga4_touch_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large),
		CDL_CUSTOMISATION(Apac_Vga4_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Vga4_touch_land_Small_Pack),
		CDL_CUSTOMISATION(Apac_Vga4_touch_land_Large_Pack),
	}
CDL_ARRAY_END(SCdlCustomisation, KCdlData);

GLREF_D const SCdlMain KCdlMainExport =
	{
	1,
	0,
	&KCdlData
	};

#include <ecom/ecom.h>
#include <ecom/implementationproxy.h>

static TAny* MainExport()
	{
	return (TAny*)&KCdlMainExport;
	}

const TImplementationProxy ImplementationTable[] =
	{
		{{0x2001cb90}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}

