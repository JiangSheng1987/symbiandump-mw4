/*
 * Copyright (C) 2006 Apple Computer, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef WmlLoader_h
#define WmlLoader_h

#include "KURL.h"
#include "SubresourceLoaderClient.h"
#include <memory>
#include <wtf/Noncopyable.h>
#include <wtf/PassRefPtr.h>

namespace WebCore {

class Frame;
class SharedBuffer;

class WmlLoader : private SubresourceLoaderClient, Noncopyable {
public:
    static std::auto_ptr<WmlLoader> create(Frame*);
    ~WmlLoader();
    
    void startLoading();
    void stopLoading();

private:
    WmlLoader(Frame*);

    virtual void didReceiveResponse(SubresourceLoader*, const ResourceResponse&);
    virtual void didReceiveData(SubresourceLoader*, const char*, int);
    virtual void didFinishLoading(SubresourceLoader*);
    virtual void didFail(SubresourceLoader*, const ResourceError&);

    void finishLoading(const KURL&, PassRefPtr<SharedBuffer> data);
    void clearLoadingState();

    Frame* m_frame;

    RefPtr<SubresourceLoader> m_resourceLoader;
    bool m_loadIsInProgress;
}; // class WmlLoader

} // namespace WebCore

#endif
