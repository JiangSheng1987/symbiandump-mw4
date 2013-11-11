// Copyright (c) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
//

#include <ecom/implementationproxy.h>
#include "upnpparamsextfactory.h"
#include "upnpsubconneventsfactory.h"
#include "upnpsubconnevents.h"
#include "upnpparamset.h"
#include "cupnpservicediscoveryimpl.h"
#include "cupnpservicepublisherimpl.h"
  
const TImplementationProxy ImplementationTable[] =
	{
	IMPLEMENTATION_PROXY_ENTRY(KUPnPParamsFactoryUid, CUPnPParamsExtFactory::NewL),
	IMPLEMENTATION_PROXY_ENTRY(KUPnPSubConnEventsUid, CUPnPSubConnEventsFactory::NewL),
	IMPLEMENTATION_PROXY_ENTRY(KUPnPDiscoveryUid, CUPnPServiceDiscoveryImpl::NewL),
	IMPLEMENTATION_PROXY_ENTRY(KUPnPPublisherUid, CUPnPServicePublisherImpl::NewL)
	};


EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
    {
    aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
    return ImplementationTable;
    }
