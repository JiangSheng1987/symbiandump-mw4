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


#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidSort_hun_huCollationMethod = 0x100059DD;

static const TUint32 TheSort_hun_huKey[] = 
	{
	0x6f80109,0x6f80121,0x6f80121,0x6f90109,0x6f90121,0x6f90121,0x7040109,0x7040121,
	0x7040121,0x7050109,0x7050121,0x7050121,0x7060109,0x7060121,0x7060121,0x7062109,
	0x7062121,0x7062121,0x7540109,0x7540121,0x7540121,0x7550109,0x7550121,0x7550121,
	0x7be0109,0x7be0121,0x7be0121,0x7bf0109,0x7bf0121,0x7bf0121,0x7ee0109,0x7ee0121,
	0x7ee0121,0x7ef0109,0x7ef0121,0x7ef0121,0x8062809,0x8062821,0x8062f09,0x8062f21,
	0x85e0109,0x85e0121,0x85e0121,0x85f0109,0x85f0121,0x85f0121,0x8760109,0x8760121,
	0x8760121,0x8770109,0x8770121,0x8770121,0x88e2809,0x88e2821,0x88e2f09,0x88e2f21,
	0x8ca0109,0x8ca0121,0x8ca0121,0x8cb0109,0x8cb0121,0x8cb0121,
	};

static const TUint16 TheSort_hun_huStringElement[] = 
	{
	0x2,0x63,0x73,0x2,0x43,0x73,0x2,0x43,
	0x53,0x3,0x63,0x63,0x73,0x3,0x43,0x63,
	0x73,0x3,0x43,0x43,0x53,0x2,0x64,0x7a,
	0x2,0x44,0x7a,0x2,0x44,0x5a,0x3,0x64,
	0x64,0x7a,0x3,0x44,0x64,0x7a,0x3,0x44,
	0x44,0x5a,0x3,0x64,0x7a,0x73,0x3,0x44,
	0x7a,0x73,0x3,0x44,0x5a,0x53,0x4,0x64,
	0x64,0x7a,0x73,0x4,0x44,0x64,0x7a,0x73,
	0x4,0x44,0x44,0x5a,0x53,0x2,0x67,0x79,
	0x2,0x47,0x79,0x2,0x47,0x59,0x3,0x67,
	0x67,0x79,0x3,0x47,0x67,0x79,0x3,0x47,
	0x47,0x59,0x2,0x6c,0x79,0x2,0x4c,0x79,
	0x2,0x4c,0x59,0x3,0x6c,0x6c,0x79,0x3,
	0x4c,0x6c,0x79,0x3,0x4c,0x4c,0x59,0x2,
	0x6e,0x79,0x2,0x4e,0x79,0x2,0x4e,0x59,
	0x3,0x6e,0x6e,0x79,0x3,0x4e,0x6e,0x79,
	0x3,0x4e,0x4e,0x59,0x2,0x6f,0x308,0x2,
	0x4f,0x308,0x2,0x6f,0x30b,0x2,0x4f,0x30b,
	0x2,0x73,0x7a,0x2,0x53,0x7a,0x2,0x53,
	0x5a,0x3,0x73,0x73,0x7a,0x3,0x53,0x73,
	0x7a,0x3,0x53,0x53,0x5a,0x2,0x74,0x79,
	0x2,0x54,0x79,0x2,0x54,0x59,0x3,0x74,
	0x74,0x79,0x3,0x54,0x74,0x79,0x3,0x54,
	0x54,0x59,0x2,0x75,0x308,0x2,0x55,0x308,
	0x2,0x75,0x30b,0x2,0x55,0x30b,0x2,0x7a,
	0x73,0x2,0x5a,0x73,0x2,0x5a,0x53,0x3,
	0x7a,0x7a,0x73,0x3,0x5a,0x7a,0x73,0x3,
	0x5a,0x5a,0x53,
	};

static const TUint32 TheSort_hun_huStringIndex[] = 
	{
	0x110005,0x60002,0xd0004,0x30001,0x26000b,0x400011,0x1b0008,0x32000e,
	0x22000a,0x3b0010,0x180007,0x2e000d,0x560017,0x4b0014,0x520016,0x480013,
	0x6b001d,0x60001a,0x67001c,0x5d0019,0x800023,0x750020,0x7c0022,0x72001f,
	0x870025,0x8d0027,0xa1002d,0x96002a,0x9d002c,0x930029,0xb60033,0xab0030,
	0xb20032,0xa8002f,0xbd0035,0xc30037,0xcc003a,0xd7003d,0xc90039,0xd3003c,
	0x90003,0x0,0x1e0009,0x36000f,0x150006,0x2a000c,0x4e0015,0x450012,
	0x63001b,0x5a0018,0x780021,0x6f001e,0x840024,0x8a0026,0x99002b,0x900028,
	0xae0031,0xa5002e,0xba0034,0xc00036,0xc60038,0xcf003b,
	};

static const TCollationKeyTable TheSort_hun_huTable = 
	{ TheSort_hun_huKey, 0, 0, TheSort_hun_huStringElement, TheSort_hun_huStringIndex, 62 };

/* Removed by SortAndMatch 27.03.2007
static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidSort_hun_huCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheSort_hun_huTable, // the locale values override the standard values
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
End of block remowed by SortAndMatch 27.03.2007 */
