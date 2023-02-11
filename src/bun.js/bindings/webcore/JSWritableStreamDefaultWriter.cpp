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
#include "JSWritableStreamDefaultWriter.h"

#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMBuiltinConstructor.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "WebCoreJSClientData.h"
#include "WritableStreamDefaultWriterBuiltins.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>

namespace WebCore {
using namespace JSC;

// Functions

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsWritableStreamDefaultWriterConstructor);

class JSWritableStreamDefaultWriterPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSWritableStreamDefaultWriterPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWritableStreamDefaultWriterPrototype* ptr = new (NotNull, JSC::allocateCell<JSWritableStreamDefaultWriterPrototype>(vm)) JSWritableStreamDefaultWriterPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSWritableStreamDefaultWriterPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWritableStreamDefaultWriterPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSWritableStreamDefaultWriterPrototype, JSWritableStreamDefaultWriterPrototype::Base);

using JSWritableStreamDefaultWriterDOMConstructor = JSDOMBuiltinConstructor<JSWritableStreamDefaultWriter>;

template<> const ClassInfo JSWritableStreamDefaultWriterDOMConstructor::s_info = { "WritableStreamDefaultWriter"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSWritableStreamDefaultWriterDOMConstructor) };

template<> JSValue JSWritableStreamDefaultWriterDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSWritableStreamDefaultWriterDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(1), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "WritableStreamDefaultWriter"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSWritableStreamDefaultWriter::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

template<> FunctionExecutable* JSWritableStreamDefaultWriterDOMConstructor::initializeExecutable(VM& vm)
{
    return writableStreamDefaultWriterInitializeWritableStreamDefaultWriterCodeGenerator(vm);
}

/* Hash table for prototype */

static const HashTableValue JSWritableStreamDefaultWriterPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsWritableStreamDefaultWriterConstructor, 0 } },
    { "closed"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinAccessorType, writableStreamDefaultWriterClosedCodeGenerator, 0 } },
    { "desiredSize"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinAccessorType, writableStreamDefaultWriterDesiredSizeCodeGenerator, 0 } },
    { "ready"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinAccessorType, writableStreamDefaultWriterReadyCodeGenerator, 0 } },
    { "abort"_s, static_cast<unsigned>(JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, writableStreamDefaultWriterAbortCodeGenerator, 0 } },
    { "close"_s, static_cast<unsigned>(JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, writableStreamDefaultWriterCloseCodeGenerator, 0 } },
    { "releaseLock"_s, static_cast<unsigned>(JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, writableStreamDefaultWriterReleaseLockCodeGenerator, 0 } },
    { "write"_s, static_cast<unsigned>(JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, writableStreamDefaultWriterWriteCodeGenerator, 0 } },
};

const ClassInfo JSWritableStreamDefaultWriterPrototype::s_info = { "WritableStreamDefaultWriter"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSWritableStreamDefaultWriterPrototype) };

void JSWritableStreamDefaultWriterPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWritableStreamDefaultWriter::info(), JSWritableStreamDefaultWriterPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSWritableStreamDefaultWriter::s_info = { "WritableStreamDefaultWriter"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSWritableStreamDefaultWriter) };

JSWritableStreamDefaultWriter::JSWritableStreamDefaultWriter(Structure* structure, JSDOMGlobalObject& globalObject)
    : JSDOMObject(structure, globalObject)
{
}

void JSWritableStreamDefaultWriter::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWritableStreamDefaultWriter::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSWritableStreamDefaultWriterPrototype::create(vm, &globalObject, JSWritableStreamDefaultWriterPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSWritableStreamDefaultWriter::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSWritableStreamDefaultWriter>(vm, globalObject);
}

JSValue JSWritableStreamDefaultWriter::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWritableStreamDefaultWriterDOMConstructor, DOMConstructorID::WritableStreamDefaultWriter>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSWritableStreamDefaultWriter::destroy(JSC::JSCell* cell)
{
    JSWritableStreamDefaultWriter* thisObject = static_cast<JSWritableStreamDefaultWriter*>(cell);
    thisObject->JSWritableStreamDefaultWriter::~JSWritableStreamDefaultWriter();
}

JSC_DEFINE_CUSTOM_GETTER(jsWritableStreamDefaultWriterConstructor, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSWritableStreamDefaultWriterPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSWritableStreamDefaultWriter::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

JSC::GCClient::IsoSubspace* JSWritableStreamDefaultWriter::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSWritableStreamDefaultWriter, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForWritableStreamDefaultWriter.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForWritableStreamDefaultWriter = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForWritableStreamDefaultWriter.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForWritableStreamDefaultWriter = std::forward<decltype(space)>(space); });
}
}
