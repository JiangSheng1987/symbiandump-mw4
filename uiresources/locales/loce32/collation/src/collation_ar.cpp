/*
* Copyright (c) 2000 Nokia Corporation and/or its subsidiary(-ies).
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



/*
The LCharSet object used by the Colara locale.
Generated by COLTAB.
*/

#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidColaraCollationMethod = 0x100059DD;

static const TUint32 TheColaraKey[] = 
	{
	0x6d50209,0x6d50309,0x6d50409,0x6d50509,0x6d50609,0xa409,0xa709,0xaa09,
	0x214010b,0x214010f,0x2140113,0x214013f,0x215010b,0x216010b,0x216014b,0x217010b,
	0x218010b,0x219010b,0x21a010b,0x21b010b,0x21c010b,0x21c010f,0x21c013f,0x21d010b,
	0x21d010f,0x21d013f,0x21e010b,0x21e010f,0x21e013f,0x21f010b,0x220010b,0x220013f,
	0x220014b,0x221010b,0x221010f,0x221013f,0x222010b,0x223010b,0x224010b,0x225010b,
	0x225010f,0x225013f,0x226010b,0x227010b,0x228010b,0x6bb0109,0x6bc0109,0x6bd0109,
	0x6be0109,0x6bf0109,0x6c00109,0x6c10109,0x6c20109,0x6c30109,0x6c40109,0x6d50109,
	0x6d50909,0x6d60109,0x6d70109,0x6d80109,0x6d90109,0x6da0109,0x6db0109,0x6dc0109,
	0x6dd0109,0x6de0109,0x6df0109,0x6e00109,0x6e10109,0x6e20109,0x6e30109,0x6e40109,
	0x6e50109,0x6e60109,0x6e70109,0x6e80109,0x6e90109,0x6ea0109,0x6eb0109,0x6ec0109,
	0x6ed0109,0x6ee0109,0x6ef0109,0x6f00109,0x6f10109,0x6f20109,0x6f30109,0x6f3010d,
	0x6f30119,0x6f30121,0x6f30125,0x6f30131,0x6f30151,0x6f40109,0x6f40121,0x6f50109,
	0x6f60109,0x6f70109,0x6f80109,0x6f8010d,0x6f80119,0x6f80121,0x6f80125,0x6f8012d,
	0x6f80131,0x6f90109,0x6fa0109,0x6fb0109,0x6fb0121,0x6fc0109,0x6fc0121,0x6fd0109,
	0x6fd010d,0x6fd0111,0x6fd0119,0x6fd0121,0x6fd0125,0x6fd0129,0x6fd012d,0x6fd0131,
	0x6fe0109,0x6fe0121,
	};

static const TUint32 TheColaraIndex[] = 
	{
	0x210014,0x2c001a,0x2e0008,0x3a0017,0x3b0021,0x3f0027,0x410059,0x420065,
	0x430073,0x610056,0x620062,0x620062,0x63006f,0xa10025,0xaa005c,0xbf002a,
	0xc6005e,0xe6005d,0x180006a,0x181006c,0x182006e,0x183006d,0x1870079,0x1880078,
	0x250005f,0x2510060,0x2520061,0x253006b,0x2990069,0x37e0021,0x55c0026,0x55d001d,
	0x55e002b,0x5890024,0x60c000f,0x61b0012,0x61f0013,0x6210037,0x6270038,0x628003a,
	0x629003b,0x62a003c,0x62b003d,0x62c003e,0x62d003f,0x62e0040,0x62f0041,0x6300042,
	0x6310043,0x6320044,0x6330045,0x6340046,0x6350047,0x6360048,0x6370049,0x638004a,
	0x639004b,0x63a004c,0x641004d,0x642004e,0x643004f,0x6440050,0x6450051,0x6460052,
	0x6470053,0x6480054,0x6490039,0x64a0055,0x6530005,0x6540006,0x6550007,0x660002d,
	0x661002e,0x662002f,0x6630030,0x6640031,0x6650032,0x6660033,0x6670034,0x6680035,
	0x6690036,0x66b0010,0x66c0011,0x6d4000c,0x2024000a,0x203d002c,0x21020076,0x212c0067,
	0x212d0076,0x216d0075,0x217d0071,0x24b6005b,0x24b70068,0x24b80077,0x24d00058,0x24d10064,
	0x24d20072,0x3001001e,0x3002000d,0xfe50001c,0xfe51001f,0xfe52000b,0xfe540023,0xfe550019,
	0xfe560029,0xfe570016,0xff010015,0xff0c001b,0xff0e0009,0xff1a0018,0xff1b0022,0xff1f0028,
	0xff21005a,0xff220066,0xff230074,0xff410057,0xff420063,0xff430070,0xff61000e,0xff640020,
	};

static const TUint16 TheColaraStringElement[] = 
	{
	0x2,0x627,0x653,0x2,0x627,0x654,0x2,0x648,
	0x654,0x2,0x627,0x655,0x2,0x64a,0x654,
	};

static const TUint32 TheColaraStringIndex[] = 
	{
	0x0,0x30001,0x90003,0x60002,0xc0004,
	};

static const TCollationKeyTable TheColaraTable = 
	{ TheColaraKey, TheColaraIndex, 120, TheColaraStringElement, TheColaraStringIndex, 5 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColaraCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColaraTable, // the locale values override the standard values
		0 // the flags are standard
		},
		{
		KUidBasicCollationMethod, // the standard unlocalised method
		NULL, // null means use the standard table
		NULL, // there's no override table
		0 // the flags are standard
		}
	};

static const TCollationDataSet TheCollationDataSet =
	{
	TheCollationMethod,
	2
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};
