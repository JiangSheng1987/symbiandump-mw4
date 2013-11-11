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
The LCharSet object used by the Coleng locale.
Generated by COLTAB.
*/

#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidColengCollationMethod = 0x100059DD;

static const TUint32 TheColengKey[] = 
	{
	0x85d0109,
	};

static const TUint32 TheColengIndex[] = 
	{
	0xdf0000,
	};

static const TCollationKeyTable TheColengTable = 
	{ TheColengKey, TheColengIndex, 1, 0, 0, 0 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColengCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColengTable, // the locale values override the standard values
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
