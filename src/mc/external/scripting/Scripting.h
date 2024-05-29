#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBinding.h"
#include "mc/external/scripting/FutureStatus.h"
#include "mc/external/scripting/LogLevel.h"
#include "mc/external/scripting/ObjectHandleValue.h"
#include "mc/external/scripting/Privilege.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/quickjs/NativeObjectOwnership.h"
#include "mc/external/scripting/quickjs/ParseContext.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ClosureAny; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class FutureAny; }
namespace Scripting { class GeneratorAny; }
namespace Scripting { class GeneratorIteratorAny; }
namespace Scripting { class GenericModuleBindingFactory; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class ILifetimeScopeListener; }
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IRuntime; }
namespace Scripting { class IScriptEngine; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting { class MajorVersionLimit; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class NativeRuntime; }
namespace Scripting { class PromiseAny; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class Release; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { class WeakObjectHandle; }
namespace Scripting { struct AnyAndJSValue; }
namespace Scripting { struct ArgumentBinding; }
namespace Scripting { struct ArgumentDetails; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct CoRoutineResult; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct EqualPropertyBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct GeneratorIteratorType; }
namespace Scripting { struct GeneratorType; }
namespace Scripting { struct GlobalBinding; }
namespace Scripting { struct HashPropertyBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct MinorVersionPromotion; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ModuleResolveResult; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct ObjectHandle; }
namespace Scripting { struct PromiseType; }
namespace Scripting { struct PropertyBinding; }
namespace Scripting { struct PropertyOutOfBoundsError; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct ScriptContextResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct TaggedBinding; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace Scripting { struct VersionConflict; }
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
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
namespace Scripting::internal { struct FetchAsAnyComponent; }
// clang-format on

namespace Scripting {
// NOLINTBEGIN
// symbol:
// ?GetDefaultArgCount@Scripting@@YAIAEBV?$vector@UArgumentDetails@Scripting@@V?$allocator@UArgumentDetails@Scripting@@@std@@@std@@@Z
MCAPI uint GetDefaultArgCount(std::vector<struct Scripting::ArgumentDetails> const&);

// symbol: ?GetInjectedArgCount@Scripting@@YAIPEAVIFunction@Reflection@1@@Z
MCAPI uint GetInjectedArgCount(class Scripting::Reflection::IFunction*);

// symbol: ?LogMessage@Scripting@@YAXW4LogLevel@1@PEBDI1ZZ
MCAPI void LogMessage(::Scripting::LogLevel, char const*, uint, char const*, ...);

// symbol: ?RED_COLOR_FORMAT@Scripting@@3PEBDEB
MCAPI extern char const* RED_COLOR_FORMAT;

// symbol:
// ?_versionSplit@Scripting@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@D@Z
MCAPI std::vector<std::string> _versionSplit(std::string const& str, char delim);

// symbol: ?defaultLogFunction@Scripting@@YAXPEAXW4LogLevel@1@PEBDI2@Z
MCAPI void defaultLogFunction(void*, ::Scripting::LogLevel level, char const*, uint, char const* message);

// symbol: ?logUserData@Scripting@@3PEAXEA
MCAPI extern void* logUserData;
// NOLINTEND

}; // namespace Scripting
