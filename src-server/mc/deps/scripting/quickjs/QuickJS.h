#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/quickjs/NativeObjectOwnership.h"
#include "mc/external/quickjs/JSTypedArrayEnum.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSValue;
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct ObjectHandle; }
namespace Scripting::QuickJS { class ContextUserData; }
namespace Scripting::QuickJS { class RegisteredClass; }
namespace Scripting::QuickJS { class RegisteredEnum; }
namespace Scripting::QuickJS { class RegisteredInterface; }
namespace Scripting::QuickJS { class RuntimeUserData; }
namespace Scripting::QuickJS { struct ArgConversionResult; }
namespace Scripting::QuickJS { struct ArrayProxy; }
namespace Scripting::QuickJS { struct PropertyGetSet; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting::QuickJS {
// functions
// NOLINTBEGIN
MCNAPI ::JSValue ConvertJSValueArgsToNativeAnys(::JSContext* ctx, ::Scripting::Reflection::IFunction* funcPtr, uint jsArgCount, ::JSValue* jsArgs, ::std::array<::entt::meta_any, 16>& outArgsAsAnys);

MCNAPI ::JSValue CopyJSValueArrayToNativeSequenceContainer(::JSContext* ctx, ::JSValue jsArray, ::entt::meta_sequence_container& view, ::entt::meta_type const& type);

MCNAPI ::JSValue CopyJSValueObjectToNativeAssociativeContainer(::JSContext* ctx, ::JSValue jsValue, ::entt::meta_associative_container& view, ::entt::meta_type const& type);

MCNAPI ::Scripting::QuickJS::ArrayProxy CreateArrayProxy(::JSContext* ctx);

MCNAPI ::std::unique_ptr<::Scripting::ClassBinding> CreateIteratorReturnClassBinding(::Scripting::IteratorBinding& iteratorBinding);

MCNAPI ::entt::meta_any ExceptionWriter(::JSContext* ctx);

MCNAPI ::JSValue GenericFreeFunctionCaller(::JSContext* ctx, ::JSValue thisVal, int argc, ::JSValue* argv, int magic, ::JSValue* funcDataVal);

MCNAPI ::JSValue GenericObjectFunctionCaller(::JSContext* ctx, ::JSValue thisVal, int argc, ::JSValue* argv, int magic, ::JSValue* funcDataVal);

MCNAPI ::JSValue GenericReflectionCtorCaller(::JSContext* ctx, ::JSValue newTarget, int argc, ::JSValue* argv, int jsClassIdMagic);

MCNAPI ::JSValue GenericReflectionPropertyGetter(::JSContext* ctx, ::JSValue thisVal, int argc, ::JSValue* argv, int magic, ::JSValue* funcDataVal);

MCNAPI ::JSValue GenericReflectionPropertySetter(::JSContext* ctx, ::JSValue thisVal, int argc, ::JSValue* argv, int magic, ::JSValue* funcDataVal);

MCNAPI ::std::string GetClassNameFromJSValue(::JSContext* ctx, ::JSValue target);

MCNAPI ::Scripting::ObjectHandle GetNativeObjectHandleFromJSValue(::JSValue jsValue);

MCNAPI ::Scripting::QuickJS::PropertyGetSet const& GetPropertyGetSetFromJSFuncData(::JSContext* ctx, ::JSValue* funcDataVal);

MCNAPI ::Scripting::QuickJS::RuntimeUserData* GetRuntimeUserDataFromContext(::JSContext* ctx);

MCNAPI bool HasNativeObjectHandle(::JSValue jsValue);

MCNAPI void InitializeBakedProperties(::JSContext* ctx, ::JSValue obj, ::Scripting::ObjectHandle objectHandle, ::Scripting::QuickJS::ContextUserData* contextData, ::Scripting::QuickJS::RegisteredClass const* registeredClass);

MCNAPI ::std::string JSAtomCStringToString(::JSContext* ctx, uint jsAtom);

MCNAPI ::entt::meta_any JSErrorToNativeAny(::JSContext* ctx, ::JSValue jsValue);

MCNAPI ::std::string JSValueCStringToString(::JSContext* ctx, ::JSValue jsValue);

MCNAPI bool JSValueIsInfinite(::JSValue const& value);

MCNAPI bool JSValueIsNan(::JSValue const& value);

MCNAPI ::entt::meta_any JSValueToBaseError(::JSContext* ctx, ::JSValue jsValue);

MCNAPI ::std::variant<::entt::meta_any, ::JSValue> JSValueToNativeAny(::JSContext* ctx, ::JSValue jsValue, ::entt::meta_type const& type);

MCNAPI ::std::variant<::entt::meta_any, ::JSValue> JSValueToNativeInterface(::JSContext* ctx, ::JSValue jsValue, ::Scripting::QuickJS::ContextUserData* contextData, ::entt::meta_type const& type, ::Scripting::InterfaceBinding const& interfaceBinding);

MCNAPI ::JSValue NativeAnyToJSProtoClass(::JSContext* ctx, ::JSValue newTarget, ::entt::meta_any& any, ::Scripting::QuickJS::RegisteredClass const& registeredClass, ::Scripting::QuickJS::ContextUserData& contextData);

MCNAPI ::Scripting::QuickJS::ArgConversionResult NativeAnyToJSValue(::JSContext* ctx, ::entt::meta_any& any, bool addRef, bool allowCopy);

MCNAPI ::Scripting::QuickJS::ArgConversionResult NativeEnumToJSValue(::JSContext* ctx, ::entt::meta_any& any, bool addRef, bool allowCopy);

MCNAPI ::JSValue NativeErrorToJSValue(::JSContext* ctx, ::entt::meta_any& any);

MCNAPI ::JSValue NativeErrorToJSValueInternal(::JSContext* ctx, ::Scripting::QuickJS::ContextUserData& contextData, ::entt::meta_any& any, uint jsClassId, ::Scripting::LifetimeRegistry& registry);

MCNAPI ::Scripting::QuickJS::ArgConversionResult NativeInterfaceToJSValue(::JSContext* ctx, ::entt::meta_any& any, ::Scripting::QuickJS::RegisteredInterface const& registeredInterface, bool addRef, bool allowCopy);

MCNAPI ::JSValue NativeObjectHandleToJSProtoClass(::JSContext* ctx, ::JSValue newTarget, ::Scripting::ObjectHandle objectHandle, ::Scripting::QuickJS::RegisteredClass const& registeredClass, ::Scripting::LifetimeRegistry& registry);

MCNAPI ::JSValue NativeObjectHandleToJSValue(::JSContext* ctx, ::Scripting::ObjectHandle objectHandle, bool addRef, bool allowCopy, ::Scripting::QuickJS::NativeObjectOwnership ownership);

MCNAPI ::Scripting::QuickJS::ArgConversionResult NativeRegisteredEnumToJSValue(::JSContext* ctx, ::entt::meta_any& any, ::Scripting::QuickJS::RegisteredEnum const& registeredEnum);

MCNAPI ::JSValue PrintError(::JSContext* ctx, ::JSValue, int argc, ::JSValue* argv);

MCNAPI ::JSValue PrintInfo(::JSContext* ctx, ::JSValue, int argc, ::JSValue* argv);

MCNAPI ::JSValue PrintWarn(::JSContext* ctx, ::JSValue, int argc, ::JSValue* argv);

MCNAPI ::JSValue ThrowEngineErrorToJS(::JSContext* ctx, ::std::string const& msg);

MCNAPI ::JSValue ThrowJSTypeErrorWithContext(::JSContext*, ::Scripting::QuickJS::ContextUserData&, char const*, ...);

MCNAPI ::JSTypedArrayEnum ToJSTypedArrayEnum(::entt::meta_type const& type);

MCNAPI ::std::string WriteObject(::JSContext* ctx, ::JSValue val);

MCNAPI ::Scripting::StrongObjectHandle getHandleFromObjectFactory(::JSContext* ctx, ::Scripting::QuickJS::ContextUserData& contextData, ::Scripting::ObjectFactory const& objectFactory);
// NOLINTEND

}
