/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  IKE socket connection interface
*
*/


#include <e32base.h>
#include "ikeconnectioninterface.h"
#include "ikeconnection.h"

// ======== MEMBER FUNCTIONS ========

EXPORT_C CIkeConnectionInterface* CIkeConnectionInterface::NewL( MIkeDebug& aDebug )
    {
    return CIkeConnection::NewL( aDebug );
    }

CIkeConnectionInterface::~CIkeConnectionInterface()
    {   
    }

CIkeConnectionInterface::CIkeConnectionInterface( TInt aPriority )
 : CActive( aPriority )
    {
    }
