#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/quickjs/JSTypedArrayEnum.h"
#include "mc/external/scripting/quickjs/NativeObjectOwnership.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSValue;
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct ObjectHandle; }
namespace Scripting::QuickJS { class ContextUserData; }
namespace Scripting::QuickJS { class RegisteredClass; }
namespace Scripting::QuickJS { class RegisteredEnum; }
namespace Scripting::QuickJS { class RegisteredInterface; }
namespace Scripting::QuickJS { class RuntimeUserData; }
namespace Scripting::QuickJS { struct ArrayProxy; }
namespace Scripting::QuickJS { struct PropertyGetSet; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting::QuickJS {
// functions
// NOLINTBEGIN
MCAPI ::JSValue ConvertJSValueArgsToNativeAnys(
    ::JSContext*                        ctx,
    ::Scripting::Reflection::IFunction* funcPtr,
    uint                                jsArgCount,
    ::JSValue*                          jsArgs,
    ::std::array<::entt::meta_any, 16>& outArgsAsAnys
);

MCAPI ::JSValue CopyJSValueArrayToNativeSequenceContainer(
    ::JSContext*                     ctx,
    ::JSValue                        jsArray,
    ::entt::meta_sequence_container& view,
    ::entt::meta_type const&         type
);

MCAPI ::JSValue CopyJSValueObjectToNativeAssociativeContainer(
    ::JSContext*                        ctx,
    ::JSValue                           jsValue,
    ::entt::meta_associative_container& view,
    ::entt::meta_type const&            type
);

MCAPI ::Scripting::QuickJS::ArrayProxy CreateArrayProxy(::JSContext* ctx);

MCAPI ::Scripting::FunctionBinding CreateIteratorNextFunctionBinding(::Scripting::IteratorBinding& iteratorBinding);

MCAPI ::std::unique_ptr<::Scripting::ClassBinding>
CreateIteratorReturnClassBinding(::Scripting::IteratorBinding& iteratorBinding);

MCAPI ::entt::meta_any ExceptionWriter(::JSContext* ctx);

MCAPI ::JSValue GenericFreeFunctionCaller(
    ::JSContext* ctx,
    ::JSValue    thisVal,
    int          argc,
    ::JSValue*   argv,
    int          magic,
    ::JSValue*   funcDataVal
);

MCAPI ::JSValue GenericObjectFunctionCaller(
    ::JSContext* ctx,
    ::JSValue    thisVal,
    int          argc,
    ::JSValue*   argv,
    int          magic,
    ::JSValue*   funcDataVal
);

MCAPI ::JSValue
GenericReflectionCtorCaller(::JSContext* ctx, ::JSValue newTarget, int argc, ::JSValue* argv, int jsClassIdMagic);

MCAPI ::JSValue GenericReflectionPropertyGetter(
    ::JSContext* ctx,
    ::JSValue    thisVal,
    int          argc,
    ::JSValue*   argv,
    int          magic,
    ::JSValue*   funcDataVal
);

MCAPI ::JSValue GenericReflectionPropertySetter(
    ::JSContext* ctx,
    ::JSValue    thisVal,
    int          argc,
    ::JSValue*   argv,
    int          magic,
    ::JSValue*   funcDataVal
);

MCAPI ::std::string GetClassNameFromJSValue(::JSContext* ctx, ::JSValue target);

MCAPI ::Scripting::ObjectHandle GetNativeObjectHandleFromJSValue(::JSValue jsValue);

MCAPI ::Scripting::QuickJS::PropertyGetSet const&
GetPropertyGetSetFromJSFuncData(::JSContext* ctx, ::JSValue* funcDataVal);

MCAPI ::Scripting::QuickJS::RuntimeUserData* GetRuntimeUserDataFromContext(::JSContext* ctx);

MCAPI bool HasNativeObjectHandle(::JSValue jsValue);

MCAPI void InitializeBakedProperties(
    ::JSContext*                                 ctx,
    ::JSValue                                    obj,
    ::Scripting::ObjectHandle                    objectHandle,
    ::Scripting::QuickJS::ContextUserData*       contextData,
    ::Scripting::QuickJS::RegisteredClass const* registeredClass
);

MCAPI ::std::string JSAtomCStringToString(::JSContext* ctx, uint jsAtom);

MCAPI ::entt::meta_any JSErrorToNativeAny(::JSContext* ctx, ::JSValue jsValue);

MCAPI ::std::string JSValueCStringToString(::JSContext* ctx, ::JSValue jsValue);

MCAPI bool JSValueIsInfinite(::JSValue const& value);

MCAPI bool JSValueIsNan(::JSValue const& value);

MCAPI ::std::variant<::entt::meta_any, ::JSValue>
JSValueToNativeAny(::JSContext* ctx, ::JSValue jsValue, ::entt::meta_type const& type);

MCAPI ::std::variant<::entt::meta_any, ::JSValue> JSValueToNativeInterface(
    ::JSContext*                           ctx,
    ::JSValue                              jsValue,
    ::Scripting::QuickJS::ContextUserData* contextData,
    ::entt::meta_type const&               type,
    ::Scripting::InterfaceBinding const&   interfaceBinding
);

MCAPI ::JSValue NativeAnyToJSProtoClass(
    ::JSContext*                                 ctx,
    ::JSValue                                    newTarget,
    ::entt::meta_any&                            any,
    ::Scripting::QuickJS::RegisteredClass const& registeredClass,
    ::Scripting::QuickJS::ContextUserData&       contextData
);

MCAPI ::JSValue NativeAnyToJSValue(::JSContext* ctx, ::entt::meta_any& any, bool addRef, bool allowCopy);

MCAPI ::JSValue NativeEnumToJSValue(::JSContext* ctx, ::entt::meta_any& any, bool addRef, bool allowCopy);

MCAPI ::JSValue NativeErrorToJSValue(::JSContext* ctx, ::entt::meta_any& any);

MCAPI ::JSValue NativeErrorToJSValueInternal(
    ::JSContext*                   ctx,
    ::entt::meta_any&              any,
    uint                           jsClassId,
    ::Scripting::LifetimeRegistry& registry
);

MCAPI ::JSValue NativeInterfaceToJSValue(
    ::JSContext*                                     ctx,
    ::entt::meta_any&                                any,
    ::Scripting::QuickJS::RegisteredInterface const& registeredInterface,
    bool                                             addRef,
    bool                                             allowCopy
);

MCAPI ::JSValue NativeObjectHandleToJSProtoClass(
    ::JSContext*                                 ctx,
    ::JSValue                                    newTarget,
    ::Scripting::ObjectHandle                    objectHandle,
    ::Scripting::QuickJS::RegisteredClass const& registeredClass,
    ::Scripting::LifetimeRegistry&               registry
);

MCAPI ::JSValue NativeObjectHandleToJSValue(
    ::JSContext*                                ctx,
    ::Scripting::ObjectHandle                   objectHandle,
    bool                                        addRef,
    bool                                        allowCopy,
    ::Scripting::QuickJS::NativeObjectOwnership ownership
);

MCAPI ::JSValue NativeRegisteredEnumToJSValue(
    ::JSContext*                                ctx,
    ::entt::meta_any&                           any,
    ::Scripting::QuickJS::RegisteredEnum const& registeredEnum
);

MCAPI ::JSValue PrintError(::JSContext* ctx, ::JSValue, int argc, ::JSValue* argv);

MCAPI ::JSValue PrintInfo(::JSContext* ctx, ::JSValue, int argc, ::JSValue* argv);

MCAPI ::JSValue PrintWarn(::JSContext* ctx, ::JSValue, int argc, ::JSValue* argv);

MCAPI ::JSTypedArrayEnum ToJSTypedArrayEnum(::entt::meta_type type);

MCAPI ::std::string WriteObject(::JSContext* ctx, ::JSValue val);

MCAPI double anyToDouble(::entt::meta_any const& any);

MCAPI ::std::string anyToString(::entt::meta_any const& any);

MCAPI ::Scripting::StrongObjectHandle getHandleFromObjectFactory(
    ::JSContext*                           ctx,
    ::Scripting::QuickJS::ContextUserData& contextData,
    ::Scripting::ObjectFactory const&      objectFactory
);
// NOLINTEND

} // namespace Scripting::QuickJS
