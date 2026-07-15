#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"
#include "mc/deps/script_core/runtime/scripting/IRuntime.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IBreakpointValidator; }
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
    ::ll::UntypedStorage<8, 64> mUnk26c3ec;
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

#ifdef LL_PLAT_S
    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&&,
        ::Scripting::IDependencyLoader*,
        ::Scripting::IPrinter*,
        ::Scripting::ContextConfig const&
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void destroyContext(::Scripting::ContextId contextId) /*override*/;
#else // LL_PLAT_C
    virtual void destroyContext(::Scripting::ContextId) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId, ::Scripting::IPayload*, ::std::optional<::Scripting::Privilege>) /*override*/;
#endif

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

    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
        executeCoroutines(::std::optional<::Scripting::Privilege>) /*override*/;

    virtual bool hasPendingJobs() /*override*/;

    virtual ::Scripting::IDebuggerController*
    enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&) /*override*/;

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
        $executeCoroutines(::std::optional<::Scripting::Privilege>);

    MCNAPI bool $hasPendingJobs();

    MCNAPI ::Scripting::IDebuggerController*
    $enableDebugger(::Scripting::IDebuggerTransport&, ::Scripting::IBreakpointValidator&);

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
