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
#include "JSSVGImageElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "PlatformString.h"
#include "SVGElement.h"
#include "SVGImageElement.h"
#include "SVGStringList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGImageElementTableEntries[] =
{
    { "height", JSSVGImageElement::HeightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "requiredFeatures", JSSVGImageElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "systemLanguage", JSSVGImageElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "farthestViewportElement", JSSVGImageElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "x", JSSVGImageElement::XAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "externalResourcesRequired", JSSVGImageElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "href", JSSVGImageElement::HrefAttrNum, DontDelete|ReadOnly, 0, &JSSVGImageElementTableEntries[17] },
    { "width", JSSVGImageElement::WidthAttrNum, DontDelete|ReadOnly, 0, &JSSVGImageElementTableEntries[22] },
    { "y", JSSVGImageElement::YAttrNum, DontDelete|ReadOnly, 0, &JSSVGImageElementTableEntries[18] },
    { "transform", JSSVGImageElement::TransformAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "preserveAspectRatio", JSSVGImageElement::PreserveAspectRatioAttrNum, DontDelete|ReadOnly, 0, &JSSVGImageElementTableEntries[21] },
    { 0, 0, 0, 0, 0 },
    { "requiredExtensions", JSSVGImageElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "xmllang", JSSVGImageElement::XmllangAttrNum, DontDelete, 0, &JSSVGImageElementTableEntries[19] },
    { "xmlspace", JSSVGImageElement::XmlspaceAttrNum, DontDelete, 0, &JSSVGImageElementTableEntries[20] },
    { "className", JSSVGImageElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "style", JSSVGImageElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "nearestViewportElement", JSSVGImageElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGImageElementTable = 
{
    2, 23, JSSVGImageElementTableEntries, 17
};

/* Hash table for prototype */

static const HashEntry JSSVGImageElementPrototypeTableEntries[] =
{
    { "hasExtension", JSSVGImageElement::HasExtensionFuncNum, DontDelete|Function, 1, &JSSVGImageElementPrototypeTableEntries[6] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "getBBox", JSSVGImageElement::GetBBoxFuncNum, DontDelete|Function, 0, &JSSVGImageElementPrototypeTableEntries[5] },
    { "getTransformToElement", JSSVGImageElement::GetTransformToElementFuncNum, DontDelete|Function, 1, 0 },
    { "getCTM", JSSVGImageElement::GetCTMFuncNum, DontDelete|Function, 0, 0 },
    { "getScreenCTM", JSSVGImageElement::GetScreenCTMFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSSVGImageElementPrototypeTable = 
{
    2, 7, JSSVGImageElementPrototypeTableEntries, 5
};

const ClassInfo JSSVGImageElementPrototype::info = { "SVGImageElementPrototype", 0, &JSSVGImageElementPrototypeTable, 0 };

JSObject* JSSVGImageElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGImageElementPrototype>(exec, "[[JSSVGImageElement.prototype]]");
}

bool JSSVGImageElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGImageElementPrototypeFunction, JSObject>(exec, &JSSVGImageElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGImageElement::info = { "SVGImageElement", &JSSVGElement::info, &JSSVGImageElementTable, 0 };

JSSVGImageElement::JSSVGImageElement(ExecState* exec, SVGImageElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGImageElementPrototype::self(exec));
}

bool JSSVGImageElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGImageElement, JSSVGElement>(exec, &JSSVGImageElementTable, this, propertyName, slot);
}

JSValue* JSSVGImageElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
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
    case YAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
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
    case WidthAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
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
    case HeightAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
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
    case PreserveAspectRatioAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedPreserveAspectRatio>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedPreserveAspectRatio>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedPreserveAspectRatio>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case HrefAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case RequiredFeaturesAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredFeatures()));
    }
    case RequiredExtensionsAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredExtensions()));
    }
    case SystemLanguageAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->systemLanguage()));
    }
    case XmllangAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return jsString(imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return jsString(imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedBoolean>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedBoolean>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedBoolean>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ClassNameAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case StyleAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedTransformList>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedTransformList>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedTransformList>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case NearestViewportElementAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    }
    return 0;
}

void JSSVGImageElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGImageElement, JSSVGElement>(exec, propertyName, value, attr, &JSSVGImageElementTable, this);
}

void JSSVGImageElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGImageElement* imp = static_cast<SVGImageElement*>(impl());

        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* JSSVGImageElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGImageElement::info))
      return throwError(exec, TypeError);

    SVGImageElement* imp = static_cast<SVGImageElement*>(static_cast<JSSVGImageElement*>(thisObj)->impl());

    switch (id) {
    case JSSVGImageElement::HasExtensionFuncNum: {
        String extension = args[0]->toString(exec);


        KJS::JSValue* result = jsBoolean(imp->hasExtension(extension));
        return result;
    }
    case JSSVGImageElement::GetBBoxFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapper<FloatRect>(imp->getBBox()));
        return result;
    }
    case JSSVGImageElement::GetCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapper<AffineTransform>(imp->getCTM()));
        return result;
    }
    case JSSVGImageElement::GetScreenCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapper<AffineTransform>(imp->getScreenCTM()));
        return result;
    }
    case JSSVGImageElement::GetTransformToElementFuncNum: {
        ExceptionCode ec = 0;
        SVGElement* element = toSVGElement(args[0]);


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapper<AffineTransform>(imp->getTransformToElement(element, ec)));
        setDOMException(exec, ec);
        return result;
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG)
