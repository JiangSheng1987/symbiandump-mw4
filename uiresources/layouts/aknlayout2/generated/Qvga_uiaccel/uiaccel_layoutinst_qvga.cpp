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

#include "uiaccel_elaf_qvga_normal_pack.h"
#include "aknlayoutscalable_elaf_hqp_c_qvga_prt_normal.h"
#include "uiaccel_elaf_qvga_small_pack.h"
#include "aknlayoutscalable_elaf_hqp_c_qvga_prt_small.h"
#include "uiaccel_elaf_qvga_large_pack.h"
#include "aknlayoutscalable_elaf_hqp_c_qvga_prt_large.h"
#include "uiaccel_abrw_qvga_normal_pack.h"
#include "aknlayoutscalable_abrw_hqp_c_qvga_prt_normal.h"
#include "uiaccel_abrw_qvga_small_pack.h"
#include "aknlayoutscalable_abrw_hqp_c_qvga_prt_small.h"
#include "uiaccel_abrw_qvga_large_pack.h"
#include "aknlayoutscalable_abrw_hqp_c_qvga_prt_large.h"
#include "uiaccel_apac_qvga_normal_pack.h"
#include "uiaccel_apac_qvga_small_pack.h"
#include "uiaccel_apac_qvga_large_pack.h"
#include "uiaccel_elaf_qvga_land_normal_pack.h"
#include "aknlayoutscalable_elaf_hql_c_qvga_lsc_normal.h"
#include "uiaccel_elaf_qvga_land_small_pack.h"
#include "aknlayoutscalable_elaf_hql_c_qvga_lsc_small.h"
#include "uiaccel_elaf_qvga_land_large_pack.h"
#include "aknlayoutscalable_elaf_hql_c_qvga_lsc_large.h"
#include "uiaccel_abrw_qvga_land_normal_pack.h"
#include "aknlayoutscalable_abrw_hql_c_qvga_lsc_normal.h"
#include "uiaccel_abrw_qvga_land_small_pack.h"
#include "aknlayoutscalable_abrw_hql_c_qvga_lsc_small.h"
#include "uiaccel_abrw_qvga_land_large_pack.h"
#include "aknlayoutscalable_abrw_hql_c_qvga_lsc_large.h"
#include "uiaccel_apac_qvga_land_normal_pack.h"
#include "uiaccel_apac_qvga_land_small_pack.h"
#include "uiaccel_apac_qvga_land_large_pack.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(UiAccel_Elaf_Qvga_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hqp_c_qvga_prt_Normal),
		CDL_CUSTOMISATION(UiAccel_Elaf_Qvga_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hqp_c_qvga_prt_Small),
		CDL_CUSTOMISATION(UiAccel_Elaf_Qvga_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hqp_c_qvga_prt_Large),
		CDL_CUSTOMISATION(UiAccel_Abrw_Qvga_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hqp_c_qvga_prt_Normal),
		CDL_CUSTOMISATION(UiAccel_Abrw_Qvga_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hqp_c_qvga_prt_Small),
		CDL_CUSTOMISATION(UiAccel_Abrw_Qvga_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hqp_c_qvga_prt_Large),
		CDL_CUSTOMISATION(UiAccel_Apac_Qvga_Normal_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Qvga_Small_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Qvga_Large_Pack),
		CDL_CUSTOMISATION(UiAccel_Elaf_Qvga_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hql_c_qvga_lsc_Normal),
		CDL_CUSTOMISATION(UiAccel_Elaf_Qvga_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hql_c_qvga_lsc_Small),
		CDL_CUSTOMISATION(UiAccel_Elaf_Qvga_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hql_c_qvga_lsc_Large),
		CDL_CUSTOMISATION(UiAccel_Abrw_Qvga_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hql_c_qvga_lsc_Normal),
		CDL_CUSTOMISATION(UiAccel_Abrw_Qvga_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hql_c_qvga_lsc_Small),
		CDL_CUSTOMISATION(UiAccel_Abrw_Qvga_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hql_c_qvga_lsc_Large),
		CDL_CUSTOMISATION(UiAccel_Apac_Qvga_land_Normal_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Qvga_land_Small_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Qvga_land_Large_Pack),
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
		{{0x10285d7c}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}

