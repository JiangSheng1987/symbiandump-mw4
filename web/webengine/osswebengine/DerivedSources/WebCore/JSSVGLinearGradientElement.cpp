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


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGLinearGradientElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedLength.h"
#include "SVGLinearGradientElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGLinearGradientElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "x2", JSSVGLinearGradientElement::X2AttrNum, DontDelete|ReadOnly, 0, 0 },
    { "x1", JSSVGLinearGradientElement::X1AttrNum, DontDelete|ReadOnly, 0, 0 },
    { "y1", JSSVGLinearGradientElement::Y1AttrNum, DontDelete|ReadOnly, 0, &JSSVGLinearGradientElementTableEntries[4] },
    { "y2", JSSVGLinearGradientElement::Y2AttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGLinearGradientElementTable = 
{
    2, 5, JSSVGLinearGradientElementTableEntries, 4
};

/* Hash table for prototype */

static const HashEntry JSSVGLinearGradientElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGLinearGradientElementPrototypeTable = 
{
    2, 1, JSSVGLinearGradientElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGLinearGradientElementPrototype::info = { "SVGLinearGradientElementPrototype", 0, &JSSVGLinearGradientElementPrototypeTable, 0 };

JSObject* JSSVGLinearGradientElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGLinearGradientElementPrototype>(exec, "[[JSSVGLinearGradientElement.prototype]]");
}

const ClassInfo JSSVGLinearGradientElement::info = { "SVGLinearGradientElement", &JSSVGGradientElement::info, &JSSVGLinearGradientElementTable, 0 };

JSSVGLinearGradientElement::JSSVGLinearGradientElement(ExecState* exec, SVGLinearGradientElement* impl)
    : JSSVGGradientElement(exec, impl)
{
    setPrototype(JSSVGLinearGradientElementPrototype::self(exec));
}

bool JSSVGLinearGradientElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLinearGradientElement, JSSVGGradientElement>(exec, &JSSVGLinearGradientElementTable, this, propertyName, slot);
}

JSValue* JSSVGLinearGradientElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case X1AttrNum: {
        SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->x1Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case Y1AttrNum: {
        SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->y1Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case X2AttrNum: {
        SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->x2Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case Y2AttrNum: {
        SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->y2Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG)
