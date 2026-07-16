#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/runtime/scripting/StringBasedRuntime.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IBreakpointValidator; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class RegistryManager; }
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
namespace Scripting::QuickJS { struct MallocFunctions; }
// clang-format on

namespace Scripting::QuickJS {

class QuickJSRuntime : public ::Scripting::StringBasedRuntime,
                       public ::std::enable_shared_from_this<::Scripting::QuickJS::QuickJSRuntime> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4a943c;
    ::ll::UntypedStorage<8, 8>  mUnk2bae05;
    ::ll::UntypedStorage<8, 8>  mUnk2d5711;
    ::ll::UntypedStorage<8, 64> mUnk294ec9;
    ::ll::UntypedStorage<8, 8>  mUnkf18e85;
    ::ll::UntypedStorage<1, 1>  mUnk9e6cf4;
    ::ll::UntypedStorage<8, 8>  mUnk60fff8;
    ::ll::UntypedStorage<8, 8>  mUnk469f9b;
    ::ll::UntypedStorage<8, 24> mUnkcbd710;
    ::ll::UntypedStorage<8, 64> mUnke4ca00;
    ::ll::UntypedStorage<8, 8>  mUnk299ca5;
    ::ll::UntypedStorage<8, 8>  mUnk4de080;
    // NOLINTEND

public:
    // prevent constructor by default
    QuickJSRuntime& operator=(QuickJSRuntime const&);
    QuickJSRuntime(QuickJSRuntime const&);
    QuickJSRuntime();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~QuickJSRuntime() /*override*/ = default;

    virtual ::Scripting::IRuntimeMetadata* getMetadata() const /*override*/;

    virtual void moveToThread() /*override*/;

    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&&,
        ::Scripting::IDependencyLoader*,
        ::Scripting::IPrinter*,
        ::Scripting::ContextConfig const&
    ) /*override*/;

    virtual void destroyContext(::Scripting::ContextId) /*override*/;

    virtual ::Scripting::ResultAny runString(
        ::Scripting::ContextId,
        ::std::string const&,
        ::std::string const&,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;

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

    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const /*override*/;

    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings) /*override*/;

    virtual void disableWatchdog() /*override*/;

    virtual ::Scripting::IWatchdog* getWatchdog() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI QuickJSRuntime(
        ::Scripting::RegistryManager&                            registryManager,
        ::std::unique_ptr<::Scripting::IRuntimeMetadata>         metadata,
        ::Scripting::DependencyLocator*                          locator,
        ::std::unique_ptr<::Scripting::QuickJS::MallocFunctions> mallocFns,
        ::std::function<
            ::std::string(::std::string_view const&, ::std::string const&, ::std::vector<::std::string> const&)>
            normalizerFn
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::RegistryManager&                            registryManager,
        ::std::unique_ptr<::Scripting::IRuntimeMetadata>         metadata,
        ::Scripting::DependencyLocator*                          locator,
        ::std::unique_ptr<::Scripting::QuickJS::MallocFunctions> mallocFns,
        ::std::function<
            ::std::string(::std::string_view const&, ::std::string const&, ::std::vector<::std::string> const&)>
            normalizerFn
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting::QuickJS
