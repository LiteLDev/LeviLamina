#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/scripting/DebuggerLogLevel.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/quickjs/NativeObjectOwnership.h"
#include "mc/external/scripting/quickjs/context/ParseContext.h"
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/FutureStatus.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class ILifetimeScopeListener; }
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct AnyAndJSValue; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct CoRoutineResult; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct EqualPropertyBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct GlobalBinding; }
namespace Scripting { struct HashPropertyBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct ObjectHandle; }
namespace Scripting { struct PromiseType; }
namespace Scripting { struct PropertyBinding; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct WatchdogEvent; }
namespace Scripting { struct WatchdogSettings; }
namespace Scripting::QuickJS { class ClassRegistry; }
namespace Scripting::QuickJS { class ContextObject; }
namespace Scripting::QuickJS { class ContextTimings; }
namespace Scripting::QuickJS { class ContextUserData; }
namespace Scripting::QuickJS { class ObjectInspector; }
namespace Scripting::QuickJS { class RegisteredClass; }
namespace Scripting::QuickJS { class RegisteredEnum; }
namespace Scripting::QuickJS { class RegisteredError; }
namespace Scripting::QuickJS { class RegisteredInterface; }
namespace Scripting::QuickJS { class RuntimeUserData; }
namespace Scripting::QuickJS { class ScriptObjRef; }
namespace Scripting::QuickJS { struct ArrayProxy; }
namespace Scripting::QuickJS { struct MallocFunctions; }
namespace Scripting::QuickJS { struct PropertyGetSet; }
namespace Scripting::QuickJS { struct ResolvedTypes; }
namespace Scripting::Reflection { class IFunction; }
struct JSContext;
struct JSModuleDef;
struct JSRuntime;
struct JSValue;
// clang-format on

namespace Scripting::QuickJS {
// NOLINTBEGIN
MCAPI struct JSValue ConvertJSValueArgsToNativeAnys(
    struct JSContext*                       ctx,
    class Scripting::Reflection::IFunction* funcPtr,
    uint                                    jsArgCount,
    struct JSValue*                         jsArgs,
    std::array<entt::meta_any, 16>&         outArgsAsAnys
);

MCAPI struct JSValue CopyJSValueArrayToNativeSequenceContainer(
    struct JSContext*              ctx,
    struct JSValue                 jsArray,
    entt::meta_sequence_container& view,
    entt::meta_type const&         type
);

MCAPI struct JSValue CopyJSValueObjectToNativeAssociativeContainer(
    struct JSContext*                 ctx,
    struct JSValue                    jsValue,
    entt::meta_associative_container& view,
    entt::meta_type const&            type
);

MCAPI struct Scripting::QuickJS::ArrayProxy CreateArrayProxy(struct JSContext* ctx);

MCAPI std::unique_ptr<struct Scripting::ClassBinding>
      CreateIteratorClassBinding(struct Scripting::IteratorBinding& iteratorBinding);

MCAPI std::unique_ptr<struct Scripting::ClassBinding>
      CreateNextClassBinding(struct Scripting::IteratorBinding& iteratorBinding);

MCAPI entt::meta_any ExceptionWriter(struct JSContext* ctx);

MCAPI struct JSValue GenericFreeFunctionCaller(
    struct JSContext* ctx,
    struct JSValue    thisVal,
    int               argc,
    struct JSValue*   argv,
    int               magic,
    struct JSValue*   funcDataVal
);

MCAPI struct JSValue GenericObjectFunctionCaller(
    struct JSContext* ctx,
    struct JSValue    thisVal,
    int               argc,
    struct JSValue*   argv,
    int               magic,
    struct JSValue*   funcDataVal
);

MCAPI struct JSValue GenericReflectionCtorCaller(
    struct JSContext* ctx,
    struct JSValue    newTarget,
    int               argc,
    struct JSValue*   argv,
    int               jsClassIdMagic
);

MCAPI struct JSValue GenericReflectionPropertyGetter(
    struct JSContext* ctx,
    struct JSValue    thisVal,
    int               argc,
    struct JSValue*   argv,
    int               magic,
    struct JSValue*   funcDataVal
);

MCAPI struct JSValue GenericReflectionPropertySetter(
    struct JSContext* ctx,
    struct JSValue    thisVal,
    int               argc,
    struct JSValue*   argv,
    int               magic,
    struct JSValue*   funcDataVal
);

MCAPI std::string GetClassNameFromJSValue(struct JSContext* ctx, struct JSValue target);

MCAPI struct Scripting::ObjectHandle GetNativeObjectHandleFromJSValue(struct JSValue jsValue);

MCAPI struct Scripting::QuickJS::PropertyGetSet const&
GetPropertyGetSetFromJSFuncData(struct JSContext* ctx, struct JSValue* funcDataVal);

MCAPI class Scripting::QuickJS::RuntimeUserData* GetRuntimeUserDataFromContext(struct JSContext* ctx);

MCAPI bool HasNativeObjectHandle(struct JSValue jsValue);

MCAPI void InitializeBakedProperties(
    struct JSContext*                                ctx,
    struct JSValue                                   obj,
    struct Scripting::ObjectHandle                   objectHandle,
    class Scripting::QuickJS::ContextUserData*       contextData,
    class Scripting::QuickJS::RegisteredClass const* registeredClass
);

MCAPI std::string JSAtomCStringToString(struct JSContext* ctx, uint jsAtom);

MCAPI entt::meta_any JSErrorToNativeAny(struct JSContext* ctx, struct JSValue jsValue);

MCAPI std::string JSValueCStringToString(struct JSContext* ctx, struct JSValue jsValue);

MCAPI bool JSValueIsInfinite(struct JSValue const& value);

MCAPI bool JSValueIsNan(struct JSValue const& value);

MCAPI std::variant<entt::meta_any, struct JSValue>
      JSValueToNativeAny(struct JSContext* ctx, struct JSValue jsValue, entt::meta_type const& type);

MCAPI std::variant<entt::meta_any, struct JSValue> JSValueToNativeInterface(
    struct JSContext*                          ctx,
    struct JSValue                             jsValue,
    class Scripting::QuickJS::ContextUserData* contextData,
    entt::meta_type const&                     type,
    struct Scripting::InterfaceBinding const&  interfaceBinding
);

MCAPI struct JSValue NativeAnyToJSProtoClass(
    struct JSContext*                                ctx,
    struct JSValue                                   newTarget,
    entt::meta_any&                                  any,
    class Scripting::QuickJS::RegisteredClass const& registeredClass,
    class Scripting::QuickJS::ContextUserData&       contextData
);

MCAPI struct JSValue NativeAnyToJSValue(struct JSContext* ctx, entt::meta_any& any, bool addRef, bool allowCopy);

MCAPI struct JSValue NativeEnumToJSValue(struct JSContext* ctx, entt::meta_any& any, bool addRef, bool allowCopy);

MCAPI struct JSValue NativeErrorToJSValue(struct JSContext* ctx, entt::meta_any& any);

MCAPI struct JSValue NativeErrorToJSValueInternal(
    struct JSContext*                  ctx,
    entt::meta_any&                    any,
    uint                               jsClassId,
    class Scripting::LifetimeRegistry& registry
);

MCAPI struct JSValue NativeInterfaceToJSValue(
    struct JSContext*                                    ctx,
    entt::meta_any&                                      any,
    class Scripting::QuickJS::RegisteredInterface const& registeredInterface,
    bool                                                 addRef,
    bool                                                 allowCopy
);

MCAPI struct JSValue NativeObjectHandleToJSProtoClass(
    struct JSContext*                                ctx,
    struct JSValue                                   newTarget,
    struct Scripting::ObjectHandle                   objectHandle,
    class Scripting::QuickJS::RegisteredClass const& registeredClass,
    class Scripting::LifetimeRegistry&               registry
);

MCAPI struct JSValue NativeObjectHandleToJSValue(
    struct JSContext*                           ctx,
    struct Scripting::ObjectHandle              objectHandle,
    bool                                        addRef,
    bool                                        allowCopy,
    ::Scripting::QuickJS::NativeObjectOwnership ownership
);

MCAPI struct JSValue NativeRegisteredEnumToJSValue(
    struct JSContext*                               ctx,
    entt::meta_any&                                 any,
    class Scripting::QuickJS::RegisteredEnum const& registeredEnum
);

MCAPI struct JSValue PrintError(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv);

MCAPI struct JSValue PrintInfo(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv);

MCAPI struct JSValue PrintWarn(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv);

MCAPI entt::meta_any WriteError(struct JSContext* ctx, struct JSValue exceptionVal);

MCAPI double anyToDouble(entt::meta_any const& any);

MCAPI std::string anyToString(entt::meta_any const& any);
// NOLINTEND

}; // namespace Scripting::QuickJS
