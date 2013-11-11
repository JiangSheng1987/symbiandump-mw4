/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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




#ifndef AKN_ICON_SRV_DEBUG_H
#define AKN_ICON_SRV_DEBUG_H

// INCLUDES
#include <e32base.h>
#include <gdi.h>

// FUNCTION PROTOTYPES

/**
* Server heap test tools.
* @internal
*/
IMPORT_C GLREF_C void __SERVER_HEAP_MARK();
IMPORT_C GLREF_C void __SERVER_HEAP_MARKEND();
IMPORT_C GLREF_C void __SERVER_HEAP_FAILNEXT( TInt aCount );
IMPORT_C GLREF_C void __SERVER_HEAP_FAILNEXT_INCREASING( TInt aCount );
IMPORT_C GLREF_C void __SERVER_HEAP_RESET();
IMPORT_C GLREF_C void __SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS();
IMPORT_C GLREF_C TInt __SERVER_HEAP_USED();
IMPORT_C GLREF_C void __SERVER_SET_PREFERRED_ICON_DISPLAY_MODE( TDisplayMode aMode );

#endif // AKN_ICON_SRV_DEBUG_H

// End of File
