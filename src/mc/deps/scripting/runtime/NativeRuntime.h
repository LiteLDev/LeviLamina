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
namespace Scripting { struct RuntimeContextData; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

class NativeRuntime : public ::Scripting::IRuntime, public ::std::enable_shared_from_this<::Scripting::NativeRuntime> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::RegistryManager&> mRegistryManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::unique_ptr<::Scripting::RuntimeContextData>>>
        mContextObjects;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeRuntime& operator=(NativeRuntime const&);
    NativeRuntime(NativeRuntime const&);
    NativeRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeRuntime() /*override*/ = default;

    // vIndex: 3
    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&
    ) /*override*/;

    // vIndex: 4
    virtual void destroyContext(::Scripting::ContextId contextId) /*override*/;

    // vIndex: 5
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege) /*override*/;

    // vIndex: 6
    virtual ::Scripting::ResultAny call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;

    // vIndex: 7
    virtual ::Scripting::ResultAny resolve(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType>,
        ::entt::meta_any&
    ) /*override*/;

    // vIndex: 8
    virtual ::Scripting::ResultAny reject(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType>,
        ::entt::meta_any&
    ) /*override*/;

    // vIndex: 9
    virtual ::Scripting::FutureStatus
        getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const
        /*override*/;

    // vIndex: 10
    virtual ::Scripting::ResultAny getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType>,
        ::entt::meta_type const&
    ) const /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult> executeCoroutines(
        ::std::optional<::std::chrono::microseconds>,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;

    // vIndex: 12
    virtual bool hasPendingJobs() /*override*/;

    // vIndex: 13
    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&) /*override*/;

    // vIndex: 14
    virtual void disableDebugger() /*override*/;

    // vIndex: 15
    virtual void startProfiler() /*override*/;

    // vIndex: 16
    virtual void stopProfiler(
        ::std::function<void(::std::string_view)>,
        ::std::optional<::std::reference_wrapper<::std::string const>>
    ) /*override*/;

    // vIndex: 17
    virtual ::Scripting::RuntimeStats computeRuntimeStats() const /*override*/;

    // vIndex: 18
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings) /*override*/;

    // vIndex: 19
    virtual void disableWatchdog() /*override*/;

    // vIndex: 20
    virtual ::Scripting::IWatchdog* getWatchdog() const /*override*/;

    // vIndex: 21
    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NativeRuntime(::Scripting::RegistryManager& registryManager);

    MCAPI ::Scripting::ResultAny runFunction(
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
    MCAPI void* $ctor(::Scripting::RegistryManager& registryManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::ScriptContext> $createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&
    );

    MCAPI void $destroyContext(::Scripting::ContextId contextId);

    MCAPI ::Scripting::ResultAny $run(
        ::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege
    );

    MCFOLD ::Scripting::ResultAny $call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        ::std::optional<::Scripting::Privilege>
    );

    MCFOLD ::Scripting::ResultAny
    $resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&);

    MCFOLD ::Scripting::ResultAny
    $reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&);

    MCFOLD ::Scripting::FutureStatus
        $getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const;

    MCFOLD ::Scripting::ResultAny $getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType>,
        ::entt::meta_type const&
    ) const;

    MCFOLD ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
        $executeCoroutines(::std::optional<::std::chrono::microseconds>, ::std::optional<::Scripting::Privilege>);

    MCFOLD bool $hasPendingJobs();

    MCFOLD ::Scripting::IDebuggerController* $enableDebugger(::Scripting::IDebuggerTransport&);

    MCFOLD void $disableDebugger();

    MCFOLD void $startProfiler();

    MCFOLD void $stopProfiler(
        ::std::function<void(::std::string_view)>,
        ::std::optional<::std::reference_wrapper<::std::string const>>
    );

    MCAPI ::Scripting::RuntimeStats $computeRuntimeStats() const;

    MCFOLD ::Scripting::IWatchdog* $enableWatchdog(::Scripting::WatchdogSettings);

    MCFOLD void $disableWatchdog();

    MCFOLD ::Scripting::IWatchdog* $getWatchdog() const;

    MCAPI ::std::optional<::Scripting::TypeNameInfo>
    $getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
