/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of the License "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:  Entrance point for DownloadMgr.
*
*/



// INCLUDE FILEs
	// System includes
#include "DownloadMgrStart.h"
#include <e32std.h>
#include <e32base.h>

// ============================= GLOBAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// This is the server's entry point
// -----------------------------------------------------------------------------
//
GLDEF_C TInt E32Main()
    {
	StartDownloadMgrServer( NULL );

	return KErrNone;
	}
