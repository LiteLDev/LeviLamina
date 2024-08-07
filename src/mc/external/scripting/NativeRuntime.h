#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/FutureStatus.h"
#include "mc/external/scripting/IRuntime.h"
#include "mc/external/scripting/Privilege.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/TypedObjectHandle.h"

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
    createContext(struct Scripting::ModuleBindingBundle&& bindings, class Scripting::IDependencyLoader* loader, class Scripting::IPrinter*, struct Scripting::ContextConfig const&);

    // vIndex: 2
    virtual void destroyContext(struct Scripting::ContextId);

    // vIndex: 3
    virtual class Scripting::ResultAny
    run(struct Scripting::ContextId, class Scripting::IPayload* payload, std::optional<::Scripting::Privilege>);

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

    MCAPI explicit NativeRuntime(class Scripting::RegistryManager&);

    MCAPI class Scripting::ResultAny runFunction(
        struct Scripting::ContextId,
        std::function<
            class Scripting::
                ResultAny(class Scripting::NativeRuntime&, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, struct Scripting::ModuleBindingBundle const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*)> const&
            function
    );

    // NOLINTEND
};

}; // namespace Scripting
