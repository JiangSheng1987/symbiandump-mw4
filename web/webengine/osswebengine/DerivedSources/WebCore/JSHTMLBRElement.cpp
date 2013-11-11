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

#include "JSHTMLBRElement.h"

#include <wtf/GetPtr.h>

#include "HTMLBRElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLBRElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "clear", JSHTMLBRElement::ClearAttrNum, DontDelete, 0, &JSHTMLBRElementTableEntries[2] },
    { "constructor", JSHTMLBRElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLBRElementTable = 
{
    2, 3, JSHTMLBRElementTableEntries, 2
};

/* Hash table for constructor */

static const HashEntry JSHTMLBRElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLBRElementConstructorTable = 
{
    2, 1, JSHTMLBRElementConstructorTableEntries, 1
};

class JSHTMLBRElementConstructor : public DOMObject {
public:
    JSHTMLBRElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLBRElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLBRElementConstructor::info = { "HTMLBRElementConstructor", 0, &JSHTMLBRElementConstructorTable, 0 };

bool JSHTMLBRElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElementConstructor, DOMObject>(exec, &JSHTMLBRElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLBRElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLBRElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLBRElementPrototypeTable = 
{
    2, 1, JSHTMLBRElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLBRElementPrototype::info = { "HTMLBRElementPrototype", 0, &JSHTMLBRElementPrototypeTable, 0 };

JSObject* JSHTMLBRElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLBRElementPrototype>(exec, "[[JSHTMLBRElement.prototype]]");
}

const ClassInfo JSHTMLBRElement::info = { "HTMLBRElement", &JSHTMLElement::info, &JSHTMLBRElementTable, 0 };

JSHTMLBRElement::JSHTMLBRElement(ExecState* exec, HTMLBRElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLBRElementPrototype::self(exec));
}

bool JSHTMLBRElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElement, JSHTMLElement>(exec, &JSHTMLBRElementTable, this, propertyName, slot);
}

JSValue* JSHTMLBRElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ClearAttrNum: {
        HTMLBRElement* imp = static_cast<HTMLBRElement*>(impl());

        return jsString(imp->clear());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLBRElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLBRElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLBRElementTable, this);
}

void JSHTMLBRElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case ClearAttrNum: {
        HTMLBRElement* imp = static_cast<HTMLBRElement*>(impl());

        imp->setClear(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLBRElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLBRElementConstructor>(exec, "[[HTMLBRElement.constructor]]");
}

}
