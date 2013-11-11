/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGAnimateElement.h"

#include <wtf/GetPtr.h>

#include "SVGAnimateElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table for prototype */

static const HashEntry JSSVGAnimateElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimateElementPrototypeTable = 
{
    2, 1, JSSVGAnimateElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGAnimateElementPrototype::info = { "SVGAnimateElementPrototype", 0, &JSSVGAnimateElementPrototypeTable, 0 };

JSObject* JSSVGAnimateElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGAnimateElementPrototype>(exec, "[[JSSVGAnimateElement.prototype]]");
}

const ClassInfo JSSVGAnimateElement::info = { "SVGAnimateElement", &JSSVGAnimationElement::info, 0, 0 };

JSSVGAnimateElement::JSSVGAnimateElement(ExecState* exec, SVGAnimateElement* impl)
    : JSSVGAnimationElement(exec, impl)
{
    setPrototype(JSSVGAnimateElementPrototype::self(exec));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)