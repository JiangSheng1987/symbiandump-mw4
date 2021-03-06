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
The LCharSet object used by the Colswe locale.
Generated by COLTAB.
*/

#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidColsweCollationMethod = 0x100059DD;

static const TUint32 TheColsweKey[] = 
	{
	0x8d62409,0x8d62421,0x8d72809,0x8d72821,0x8d92809,0x8d92821,0x8d96f09,0x8d96f21,
	0x8d96f09,0x8dc0109,0x8dc0121,0x8dc2209,0x8dc2221,0x8d80109,0x8d80121,0x8d81309,
	0x8d81321,0x8d83b09,0x8d83b21,
	};

static const TUint32 TheColsweIndex[] = 
	{
	0xc6000e,0xe6000d,0xf80008,0x1b7000a,0x1e20012,0x1e30011,0x1ee000c,0x1ef000b,
	0x1fc0010,0x1fd000f,0x2920009,
	};

static const TUint16 TheColsweStringElement[] = 
	{
	0x2,0x61,0x30a,0x2,0x41,0x30a,0x2,0x61,
	0x308,0x2,0x41,0x308,0x2,0x6f,0x308,0x2,
	0x4f,0x308,0x2,0x6f,0x335,0x2,0x4f,0x335,
	0x2,0x6f,0x338,
	};

static const TUint32 TheColsweStringIndex[] = 
	{
	0x90003,0x30001,0xf0005,0x150007,0x60002,0x0,0xc0004,0x120006,
	0x180008,
	};

static const TCollationKeyTable TheColsweTable = 
	{ TheColsweKey, TheColsweIndex, 11, TheColsweStringElement, TheColsweStringIndex, 9 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColsweCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColsweTable, // the locale values override the standard values
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
