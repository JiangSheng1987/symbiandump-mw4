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

#ifndef JSHTMLDocument_H
#define JSHTMLDocument_H

#include "JSDocument.h"

namespace WebCore {

class HTMLDocument;

class JSHTMLDocument : public JSDocument {
public:
    JSHTMLDocument(KJS::ExecState*, HTMLDocument*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier&, KJS::JSValue*, int attr = KJS::None);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*, int attr);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        TitleAttrNum, ReferrerAttrNum, DomainAttrNum, URLAttrNum, 
        BodyAttrNum, ImagesAttrNum, AppletsAttrNum, LinksAttrNum, 
        FormsAttrNum, AnchorsAttrNum, CookieAttrNum, EmbedsAttrNum, 
        PluginsAttrNum, ScriptsAttrNum, LastModifiedAttrNum, AllAttrNum, 
        LocationAttrNum, WidthAttrNum, HeightAttrNum, DirAttrNum, 
        DesignModeAttrNum, BgColorAttrNum, FgColorAttrNum, AlinkColorAttrNum, 
        LinkColorAttrNum, VlinkColorAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum, 

        // Functions
        OpenFuncNum, CloseFuncNum, WriteFuncNum, WritelnFuncNum, 
        GetElementsByNameFuncNum, GetElementByIdFuncNum, ClearFuncNum, CaptureEventsFuncNum, 
        ReleaseEventsFuncNum
    };

    // Custom attributes
    KJS::JSValue* all(KJS::ExecState*) const;
    void setAll(KJS::ExecState*, KJS::JSValue*);
    KJS::JSValue* location(KJS::ExecState*) const;
    void setLocation(KJS::ExecState*, KJS::JSValue*);

    // Custom functions
    KJS::JSValue* open(KJS::ExecState*, const KJS::List&);
    KJS::JSValue* write(KJS::ExecState*, const KJS::List&);
    KJS::JSValue* writeln(KJS::ExecState*, const KJS::List&);
    KJS::JSValue* clear(KJS::ExecState*, const KJS::List&);
private:
    static bool canGetItemsForName(KJS::ExecState*, HTMLDocument*, const KJS::Identifier&);
    static KJS::JSValue* nameGetter(KJS::ExecState*, KJS::JSObject*, const KJS::Identifier&, const KJS::PropertySlot&);
};


class JSHTMLDocumentPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState* exec);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSHTMLDocumentPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSDocumentPrototype::self(exec)) { }
};

class JSHTMLDocumentPrototypeFunction : public KJS::InternalFunctionImp {
public:
    JSHTMLDocumentPrototypeFunction(KJS::ExecState* exec, int i, int len, const KJS::Identifier& name)
        : KJS::InternalFunctionImp(static_cast<KJS::FunctionPrototype*>(exec->lexicalInterpreter()->builtinFunctionPrototype()), name)
        , id(i)
    {
        put(exec, exec->propertyNames().length, KJS::jsNumber(len), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum);
    }
    virtual KJS::JSValue* callAsFunction(KJS::ExecState*, KJS::JSObject*, const KJS::List&);

private:
    int id;
};

} // namespace WebCore

#endif
