#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/FutureStatus.h"
#include "mc/external/scripting/runtime/IRuntime.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IRuntime; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct CoRoutineResult; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct PromiseType; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

class NativeRuntime : public ::Scripting::IRuntime {
public:
    // prevent constructor by default
    NativeRuntime& operator=(NativeRuntime const&);
    NativeRuntime(NativeRuntime const&);
    NativeRuntime();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeRuntime() = default;

    // vIndex: 1
    virtual std::optional<class Scripting::ScriptContext>
    createContext(struct Scripting::ModuleBindingBundle&& bindings, class Scripting::IDependencyLoader* loader, class Scripting::IPrinter* printer, struct Scripting::ContextConfig const&);

    // vIndex: 2
    virtual void destroyContext(struct Scripting::ContextId contextId);

    // vIndex: 3
    virtual class Scripting::ResultAny
    run(struct Scripting::ContextId           contextId,
        class Scripting::IPayload*            payload,
        std::optional<::Scripting::Privilege> privilege);

    // vIndex: 4
    virtual class Scripting::ResultAny
    call(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>, entt::meta_any*, uint, entt::meta_type const&, std::optional<::Scripting::Privilege>);

    // vIndex: 5
    virtual class Scripting::ResultAny
    resolve(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>, entt::meta_any&);

    // vIndex: 6
    virtual class Scripting::ResultAny
    reject(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>, entt::meta_any&);

    // vIndex: 7
    virtual ::Scripting::FutureStatus
        getFutureStatus(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>)
            const;

    // vIndex: 8
    virtual class Scripting::ResultAny
    getFutureResult(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>, entt::meta_type const&)
        const;

    // vIndex: 9
    virtual class Scripting::Result<struct Scripting::CoRoutineResult>
        executeCoroutines(std::optional<std::chrono::microseconds>);

    // vIndex: 10
    virtual bool hasPendingJobs();

    // vIndex: 11
    virtual class Scripting::IDebuggerController* enableDebugger(class Scripting::IDebuggerTransport&);

    // vIndex: 12
    virtual void disableDebugger();

    // vIndex: 13
    virtual void startProfiler();

    // vIndex: 14
    virtual void stopProfiler(std::string const&);

    // vIndex: 15
    virtual struct Scripting::RuntimeStats computeRuntimeStats() const;

    // vIndex: 16
    virtual class Scripting::IWatchdog* enableWatchdog(struct Scripting::WatchdogSettings);

    // vIndex: 17
    virtual void disableWatchdog();

    // vIndex: 18
    virtual class Scripting::IWatchdog* getWatchdog() const;

    // vIndex: 19
    virtual std::optional<struct Scripting::TypeNameInfo>
    getNameForType(struct Scripting::ContextId, entt::meta_type const&, bool) const;

    MCAPI explicit NativeRuntime(class Scripting::RegistryManager& registryManager);

    MCAPI class Scripting::ResultAny runFunction(
        struct Scripting::ContextId contextId,
        std::function<
            class Scripting::
                ResultAny(class Scripting::NativeRuntime&, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, struct Scripting::ModuleBindingBundle const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*)> const&
            function
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Scripting::ResultAny
    call$(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>, entt::meta_any*, uint, entt::meta_type const&, std::optional<::Scripting::Privilege>);

    MCAPI struct Scripting::RuntimeStats computeRuntimeStats$() const;

    MCAPI std::optional<class Scripting::ScriptContext>
    createContext$(struct Scripting::ModuleBindingBundle&& bindings, class Scripting::IDependencyLoader* loader, class Scripting::IPrinter* printer, struct Scripting::ContextConfig const&);

    MCAPI void destroyContext$(struct Scripting::ContextId contextId);

    MCAPI void disableDebugger$();

    MCAPI void disableWatchdog$();

    MCAPI class Scripting::IDebuggerController* enableDebugger$(class Scripting::IDebuggerTransport&);

    MCAPI class Scripting::IWatchdog* enableWatchdog$(struct Scripting::WatchdogSettings);

    MCAPI class Scripting::Result<struct Scripting::CoRoutineResult>
        executeCoroutines$(std::optional<std::chrono::microseconds>);

    MCAPI class Scripting::ResultAny
    getFutureResult$(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>, entt::meta_type const&)
        const;

    MCAPI ::Scripting::FutureStatus
        getFutureStatus$(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>)
            const;

    MCAPI std::optional<struct Scripting::TypeNameInfo>
          getNameForType$(struct Scripting::ContextId, entt::meta_type const&, bool) const;

    MCAPI class Scripting::IWatchdog* getWatchdog$() const;

    MCAPI bool hasPendingJobs$();

    MCAPI class Scripting::ResultAny
    reject$(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>, entt::meta_any&);

    MCAPI class Scripting::ResultAny
    resolve$(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>, entt::meta_any&);

    MCAPI class Scripting::ResultAny run$(
        struct Scripting::ContextId           contextId,
        class Scripting::IPayload*            payload,
        std::optional<::Scripting::Privilege> privilege
    );

    MCAPI void startProfiler$();

    MCAPI void stopProfiler$(std::string const&);

    // NOLINTEND
};

}; // namespace Scripting
