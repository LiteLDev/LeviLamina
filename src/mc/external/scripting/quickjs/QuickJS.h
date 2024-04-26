#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/FutureStatus.h"
#include "mc/external/scripting/Privilege.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/quickjs/NativeObjectOwnership.h"
#include "mc/external/scripting/quickjs/ParseContext.h"

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
// symbol:
// ?ConvertJSValueArgsToNativeAnys@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@PEAVIFunction@Reflection@2@IPEAU3@AEAV?$array@Vmeta_any@entt@@$0BA@@std@@@Z
MCAPI struct JSValue
ConvertJSValueArgsToNativeAnys(struct JSContext*, class Scripting::Reflection::IFunction*, uint, struct JSValue*, std::array<entt::meta_any, 16>&);

// symbol:
// ?CopyJSValueArrayToNativeSequenceContainer@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@AEAVmeta_sequence_container@entt@@AEBVmeta_type@6@@Z
MCAPI struct JSValue
CopyJSValueArrayToNativeSequenceContainer(struct JSContext*, struct JSValue, entt::meta_sequence_container&, entt::meta_type const&);

// symbol:
// ?CopyJSValueObjectToNativeAssociativeContainer@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@AEAVmeta_associative_container@entt@@AEBVmeta_type@6@@Z
MCAPI struct JSValue
CopyJSValueObjectToNativeAssociativeContainer(struct JSContext*, struct JSValue, entt::meta_associative_container&, entt::meta_type const&);

// symbol: ?CreateArrayProxy@QuickJS@Scripting@@YA?AUArrayProxy@12@PEAUJSContext@@@Z
MCAPI struct Scripting::QuickJS::ArrayProxy CreateArrayProxy(struct JSContext* ctx);

// symbol:
// ?CreateIteratorClassBinding@QuickJS@Scripting@@YA?AV?$unique_ptr@UClassBinding@Scripting@@U?$default_delete@UClassBinding@Scripting@@@std@@@std@@AEAUIteratorBinding@2@@Z
MCAPI std::unique_ptr<struct Scripting::ClassBinding> CreateIteratorClassBinding(struct Scripting::IteratorBinding&);

// symbol:
// ?CreateNextClassBinding@QuickJS@Scripting@@YA?AV?$unique_ptr@UClassBinding@Scripting@@U?$default_delete@UClassBinding@Scripting@@@std@@@std@@AEAUIteratorBinding@2@@Z
MCAPI std::unique_ptr<struct Scripting::ClassBinding> CreateNextClassBinding(struct Scripting::IteratorBinding&);

// symbol: ?ExceptionWriter@QuickJS@Scripting@@YA?AVmeta_any@entt@@PEAUJSContext@@@Z
MCAPI entt::meta_any ExceptionWriter(struct JSContext* ctx);

// symbol: ?GenericFreeFunctionCaller@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@H2@Z
MCAPI struct JSValue
GenericFreeFunctionCaller(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv, int, struct JSValue*);

// symbol: ?GenericObjectFunctionCaller@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@H2@Z
MCAPI struct JSValue
GenericObjectFunctionCaller(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv, int, struct JSValue*);

// symbol: ?GenericReflectionCtorCaller@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@H@Z
MCAPI struct JSValue
GenericReflectionCtorCaller(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv, int);

// symbol: ?GenericReflectionPropertyGetter@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@H2@Z
MCAPI struct JSValue
GenericReflectionPropertyGetter(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv, int, struct JSValue*);

// symbol: ?GenericReflectionPropertySetter@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@H2@Z
MCAPI struct JSValue
GenericReflectionPropertySetter(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv, int, struct JSValue*);

// symbol:
// ?GetClassNameFromJSValue@QuickJS@Scripting@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUJSContext@@UJSValue@@@Z
MCAPI std::string GetClassNameFromJSValue(struct JSContext*, struct JSValue);

// symbol: ?GetNativeObjectHandleFromJSValue@QuickJS@Scripting@@YA?AUObjectHandle@2@UJSValue@@@Z
MCAPI struct Scripting::ObjectHandle GetNativeObjectHandleFromJSValue(struct JSValue);

// symbol: ?GetPropertyGetSetFromJSFuncData@QuickJS@Scripting@@YAAEBUPropertyGetSet@12@PEAUJSContext@@PEAUJSValue@@@Z
MCAPI struct Scripting::QuickJS::PropertyGetSet const&
GetPropertyGetSetFromJSFuncData(struct JSContext* ctx, struct JSValue*);

// symbol: ?GetRuntimeUserDataFromContext@QuickJS@Scripting@@YAPEAVRuntimeUserData@12@PEAUJSContext@@@Z
MCAPI class Scripting::QuickJS::RuntimeUserData* GetRuntimeUserDataFromContext(struct JSContext* ctx);

// symbol: ?HasNativeObjectHandle@QuickJS@Scripting@@YA_NUJSValue@@@Z
MCAPI bool HasNativeObjectHandle(struct JSValue);

// symbol:
// ?InitializeBakedProperties@QuickJS@Scripting@@YAXPEAUJSContext@@UJSValue@@UObjectHandle@2@PEAVContextUserData@12@PEBVRegisteredClass@12@@Z
MCAPI void
InitializeBakedProperties(struct JSContext*, struct JSValue, struct Scripting::ObjectHandle, class Scripting::QuickJS::ContextUserData*, class Scripting::QuickJS::RegisteredClass const*);

// symbol:
// ?JSAtomCStringToString@QuickJS@Scripting@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUJSContext@@I@Z
MCAPI std::string JSAtomCStringToString(struct JSContext*, uint);

// symbol: ?JSErrorToNativeAny@QuickJS@Scripting@@YA?AVmeta_any@entt@@PEAUJSContext@@UJSValue@@@Z
MCAPI entt::meta_any JSErrorToNativeAny(struct JSContext* ctx, struct JSValue);

// symbol:
// ?JSValueCStringToString@QuickJS@Scripting@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUJSContext@@UJSValue@@@Z
MCAPI std::string JSValueCStringToString(struct JSContext*, struct JSValue);

// symbol: ?JSValueIsInfinite@QuickJS@Scripting@@YA_NAEBUJSValue@@@Z
MCAPI bool JSValueIsInfinite(struct JSValue const&);

// symbol: ?JSValueIsNan@QuickJS@Scripting@@YA_NAEBUJSValue@@@Z
MCAPI bool JSValueIsNan(struct JSValue const&);

// symbol:
// ?JSValueToNativeAny@QuickJS@Scripting@@YA?AV?$variant@Vmeta_any@entt@@UJSValue@@@std@@PEAUJSContext@@UJSValue@@AEBVmeta_type@entt@@@Z
MCAPI std::variant<entt::meta_any, struct JSValue>
      JSValueToNativeAny(struct JSContext* ctx, struct JSValue, entt::meta_type const& type);

// symbol:
// ?JSValueToNativeInterface@QuickJS@Scripting@@YA?AV?$variant@Vmeta_any@entt@@UJSValue@@@std@@PEAUJSContext@@UJSValue@@PEAVContextUserData@12@AEBVmeta_type@entt@@AEBUInterfaceBinding@2@@Z
MCAPI std::variant<entt::meta_any, struct JSValue>
JSValueToNativeInterface(struct JSContext* ctx, struct JSValue, class Scripting::QuickJS::ContextUserData*, entt::meta_type const& type, struct Scripting::InterfaceBinding const&);

// symbol:
// ?NativeAnyToJSProtoClass@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@AEAVmeta_any@entt@@AEBVRegisteredClass@12@AEAVContextUserData@12@@Z
MCAPI struct JSValue
NativeAnyToJSProtoClass(struct JSContext* ctx, struct JSValue, entt::meta_any& any, class Scripting::QuickJS::RegisteredClass const&, class Scripting::QuickJS::ContextUserData&);

// symbol: ?NativeAnyToJSValue@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@AEAVmeta_any@entt@@_N2@Z
MCAPI struct JSValue NativeAnyToJSValue(struct JSContext* ctx, entt::meta_any& any, bool, bool);

// symbol: ?NativeEnumToJSValue@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@AEAVmeta_any@entt@@_N2@Z
MCAPI struct JSValue NativeEnumToJSValue(struct JSContext* ctx, entt::meta_any& any, bool, bool);

// symbol: ?NativeErrorToJSValue@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@AEAVmeta_any@entt@@@Z
MCAPI struct JSValue NativeErrorToJSValue(struct JSContext* ctx, entt::meta_any& any);

// symbol:
// ?NativeErrorToJSValueInternal@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@AEAVmeta_any@entt@@IAEAVLifetimeRegistry@2@@Z
MCAPI struct JSValue NativeErrorToJSValueInternal(
    struct JSContext* ctx,
    entt::meta_any&   any,
    uint,
    class Scripting::LifetimeRegistry& registry
);

// symbol:
// ?NativeInterfaceToJSValue@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@AEAVmeta_any@entt@@AEBVRegisteredInterface@12@_N3@Z
MCAPI struct JSValue NativeInterfaceToJSValue(
    struct JSContext* ctx,
    entt::meta_any&   any,
    class Scripting::QuickJS::RegisteredInterface const&,
    bool,
    bool
);

// symbol:
// ?NativeObjectHandleToJSProtoClass@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@UObjectHandle@2@AEBVRegisteredClass@12@AEAVLifetimeRegistry@2@@Z
MCAPI struct JSValue NativeObjectHandleToJSProtoClass(
    struct JSContext* ctx,
    struct JSValue,
    struct Scripting::ObjectHandle objectHandle,
    class Scripting::QuickJS::RegisteredClass const&,
    class Scripting::LifetimeRegistry& registry
);

// symbol:
// ?NativeObjectHandleToJSValue@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@UObjectHandle@2@_N2W4NativeObjectOwnership@12@@Z
MCAPI struct JSValue NativeObjectHandleToJSValue(
    struct JSContext*              ctx,
    struct Scripting::ObjectHandle objectHandle,
    bool,
    bool,
    ::Scripting::QuickJS::NativeObjectOwnership
);

// symbol:
// ?NativeRegisteredEnumToJSValue@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@AEAVmeta_any@entt@@AEBVRegisteredEnum@12@@Z
MCAPI struct JSValue
NativeRegisteredEnumToJSValue(struct JSContext* ctx, entt::meta_any& any, class Scripting::QuickJS::RegisteredEnum const&);

// symbol: ?PrintError@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@@Z
MCAPI struct JSValue PrintError(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv);

// symbol: ?PrintInfo@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@@Z
MCAPI struct JSValue PrintInfo(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv);

// symbol: ?PrintWarn@QuickJS@Scripting@@YA?AUJSValue@@PEAUJSContext@@U3@HPEAU3@@Z
MCAPI struct JSValue PrintWarn(struct JSContext* ctx, struct JSValue, int argc, struct JSValue* argv);

// symbol: ?WriteError@QuickJS@Scripting@@YA?AVmeta_any@entt@@PEAUJSContext@@UJSValue@@@Z
MCAPI entt::meta_any WriteError(struct JSContext* ctx, struct JSValue);

// symbol: ?anyToDouble@QuickJS@Scripting@@YANAEBVmeta_any@entt@@@Z
MCAPI double anyToDouble(entt::meta_any const&);

// symbol:
// ?anyToString@QuickJS@Scripting@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVmeta_any@entt@@@Z
MCAPI std::string anyToString(entt::meta_any const&);
// NOLINTEND

}; // namespace Scripting::QuickJS
