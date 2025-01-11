#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/FutureStatus.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct CoRoutineResult; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct IRuntimeMetadata; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct PromiseType; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

class IRuntime {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRuntime() = default;

    // vIndex: 1
    virtual ::Scripting::IRuntimeMetadata* getMetadata() const;

    // vIndex: 2
    virtual void moveToThread();

    // vIndex: 3
    virtual ::std::optional<::Scripting::ScriptContext>
    createContext(::Scripting::ModuleBindingBundle&&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*, ::Scripting::ContextConfig const&) = 0;

    // vIndex: 4
    virtual void destroyContext(::Scripting::ContextId) = 0;

    // vIndex: 5
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId, ::Scripting::IPayload*, ::std::optional<::Scripting::Privilege>) = 0;

    // vIndex: 6
    virtual ::Scripting::ResultAny
    call(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::ClosureType>, ::entt::meta_any*, uint, ::entt::meta_type const&, ::std::optional<::Scripting::Privilege>) = 0;

    // vIndex: 7
    virtual ::Scripting::ResultAny
    resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&) = 0;

    // vIndex: 8
    virtual ::Scripting::ResultAny
    reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&) = 0;

    // vIndex: 9
    virtual ::Scripting::FutureStatus
        getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const = 0;

    // vIndex: 10
    virtual ::Scripting::ResultAny
    getFutureResult(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>, ::entt::meta_type const&)
        const = 0;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
        executeCoroutines(::std::optional<::std::chrono::microseconds>) = 0;

    // vIndex: 12
    virtual bool hasPendingJobs() = 0;

    // vIndex: 13
    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&) = 0;

    // vIndex: 14
    virtual void disableDebugger() = 0;

    // vIndex: 15
    virtual void startProfiler() = 0;

    // vIndex: 16
    virtual void
        stopProfiler(::std::function<void(::std::string_view)>, ::std::optional<::std::reference_wrapper<::std::string const>>) = 0;

    // vIndex: 17
    virtual ::Scripting::RuntimeStats computeRuntimeStats() const = 0;

    // vIndex: 18
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings) = 0;

    // vIndex: 19
    virtual void disableWatchdog() = 0;

    // vIndex: 20
    virtual ::Scripting::IWatchdog* getWatchdog() const = 0;

    // vIndex: 21
    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::IRuntimeMetadata* $getMetadata() const;

    MCAPI void $moveToThread();
    // NOLINTEND
};

} // namespace Scripting
