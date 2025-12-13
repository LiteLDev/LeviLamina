#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/reflection/Privilege.h"
#include "mc/deps/scripting/runtime/FutureStatus.h"
#include "mc/deps/scripting/runtime/IRuntime.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
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

class NativeRuntime : public ::Scripting::IRuntime, public ::std::enable_shared_from_this<::Scripting::NativeRuntime> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkff21cf;
    ::ll::UntypedStorage<8, 64> mUnk59e9d2;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeRuntime& operator=(NativeRuntime const&);
    NativeRuntime(NativeRuntime const&);
    NativeRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NativeRuntime() /*override*/ = default;

    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&
    ) /*override*/;

    virtual void destroyContext(::Scripting::ContextId contextId) /*override*/;

    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege) /*override*/;

    virtual ::Scripting::ResultAny call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;

    virtual ::Scripting::ResultAny resolve(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType>,
        ::entt::meta_any&
    ) /*override*/;

    virtual ::Scripting::ResultAny reject(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType>,
        ::entt::meta_any&
    ) /*override*/;

    virtual ::Scripting::FutureStatus
        getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const
        /*override*/;

    virtual ::Scripting::ResultAny getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType>,
        ::entt::meta_type const&
    ) const /*override*/;

    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult> executeCoroutines(
        ::std::optional<::std::chrono::microseconds>,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;

    virtual bool hasPendingJobs() /*override*/;

    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&) /*override*/;

    virtual void disableDebugger() /*override*/;

    virtual void startProfiler() /*override*/;

    virtual void stopProfiler(
        ::std::function<void(::std::string_view)>,
        ::std::optional<::std::reference_wrapper<::std::string const>>
    ) /*override*/;

    virtual ::Scripting::RuntimeStats computeRuntimeStats() const /*override*/;

    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings) /*override*/;

    virtual void disableWatchdog() /*override*/;

    virtual ::Scripting::IWatchdog* getWatchdog() const /*override*/;

    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S explicit NativeRuntime(::Scripting::RegistryManager& registryManager);

    MCNAPI_S ::Scripting::ResultAny runFunction(
        ::Scripting::ContextId contextId,
        ::std::function<::Scripting::ResultAny(
            ::Scripting::NativeRuntime&,
            ::Scripting::ContextId,
            ::Scripting::WeakLifetimeScope,
            ::Scripting::ModuleBindingBundle const&,
            ::Scripting::IDependencyLoader*,
            ::Scripting::IPrinter*
        )> const&              function
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::Scripting::RegistryManager& registryManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::std::optional<::Scripting::ScriptContext> $createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&
    );

    MCNAPI void $destroyContext(::Scripting::ContextId contextId);

    MCNAPI ::Scripting::ResultAny $run(
        ::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege
    );

    MCNAPI ::Scripting::ResultAny $call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        ::std::optional<::Scripting::Privilege>
    );

    MCNAPI ::Scripting::ResultAny
    $resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&);

    MCNAPI ::Scripting::ResultAny
    $reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&);

    MCNAPI ::Scripting::FutureStatus
        $getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const;

    MCNAPI ::Scripting::ResultAny $getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType>,
        ::entt::meta_type const&
    ) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
        $executeCoroutines(::std::optional<::std::chrono::microseconds>, ::std::optional<::Scripting::Privilege>);

    MCNAPI bool $hasPendingJobs();

    MCNAPI ::Scripting::IDebuggerController* $enableDebugger(::Scripting::IDebuggerTransport&);

    MCNAPI void $disableDebugger();

    MCNAPI void $startProfiler();

    MCNAPI void $stopProfiler(
        ::std::function<void(::std::string_view)>,
        ::std::optional<::std::reference_wrapper<::std::string const>>
    );

    MCNAPI ::Scripting::RuntimeStats $computeRuntimeStats() const;

    MCNAPI ::Scripting::IWatchdog* $enableWatchdog(::Scripting::WatchdogSettings);

    MCNAPI void $disableWatchdog();

    MCNAPI ::Scripting::IWatchdog* $getWatchdog() const;

    MCNAPI ::std::optional<::Scripting::TypeNameInfo>
    $getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;
#endif


    // NOLINTEND
};

} // namespace Scripting
