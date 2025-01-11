#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/FutureStatus.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/external/scripting/runtime/StringBasedRuntime.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSModuleDef;
namespace Scripting { class DependencyLocator; }
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
namespace Scripting::QuickJS { class ContextObject; }
namespace Scripting::QuickJS { struct MallocFunctions; }
// clang-format on

namespace Scripting::QuickJS {

class QuickJSRuntime : public ::Scripting::StringBasedRuntime,
                       public ::std::enable_shared_from_this<::Scripting::QuickJS::QuickJSRuntime> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4a943c;
    ::ll::UntypedStorage<8, 8>  mUnkfaeecd;
    ::ll::UntypedStorage<8, 8>  mUnk53e8fe;
    ::ll::UntypedStorage<8, 8>  mUnkf9e8f9;
    ::ll::UntypedStorage<8, 64> mUnk1c3b53;
    ::ll::UntypedStorage<8, 8>  mUnk70cddb;
    ::ll::UntypedStorage<8, 8>  mUnk6d0b0e;
    ::ll::UntypedStorage<8, 8>  mUnk2178f5;
    ::ll::UntypedStorage<8, 64> mUnk2125c3;
    ::ll::UntypedStorage<8, 64> mUnke4ca00;
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
    // vIndex: 0
    virtual ~QuickJSRuntime() /*override*/;

    // vIndex: 1
    virtual ::Scripting::IRuntimeMetadata* getMetadata() const /*override*/;

    // vIndex: 2
    virtual void moveToThread() /*override*/;

    // vIndex: 3
    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&  config
    ) /*override*/;

    // vIndex: 4
    virtual void destroyContext(::Scripting::ContextId contextId) /*override*/;

    // vIndex: 22
    virtual ::Scripting::ResultAny runString(
        ::Scripting::ContextId                  contextId,
        ::std::string const&                    scriptName,
        ::std::string const&                    scriptData,
        ::std::optional<::Scripting::Privilege> privilege
    ) /*override*/;

    // vIndex: 6
    virtual ::Scripting::ResultAny call(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType,
        ::std::optional<::Scripting::Privilege>                  privilege
    ) /*override*/;

    // vIndex: 7
    virtual ::Scripting::ResultAny resolve(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    ) /*override*/;

    // vIndex: 8
    virtual ::Scripting::ResultAny reject(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    ) /*override*/;

    // vIndex: 9
    virtual ::Scripting::FutureStatus
        getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const
        /*override*/;

    // vIndex: 10
    virtual ::Scripting::ResultAny getFutureResult(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::entt::meta_type const&                                expectedResultType
    ) const /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
    executeCoroutines(::std::optional<::std::chrono::microseconds> timeSlice) /*override*/;

    // vIndex: 12
    virtual bool hasPendingJobs() /*override*/;

    // vIndex: 13
    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport& transport) /*override*/;

    // vIndex: 14
    virtual void disableDebugger() /*override*/;

    // vIndex: 15
    virtual void startProfiler() /*override*/;

    // vIndex: 16
    virtual void stopProfiler(
        ::std::function<void(::std::string_view)>                      captureCb,
        ::std::optional<::std::reference_wrapper<::std::string const>> savePathOpt
    ) /*override*/;

    // vIndex: 17
    virtual ::Scripting::RuntimeStats computeRuntimeStats() const /*override*/;

    // vIndex: 21
    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId contextId, ::entt::meta_type const& type, bool allowUnknownTypes) const
        /*override*/;

    // vIndex: 18
    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings settings) /*override*/;

    // vIndex: 19
    virtual void disableWatchdog() /*override*/;

    // vIndex: 20
    virtual ::Scripting::IWatchdog* getWatchdog() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI QuickJSRuntime(
        ::Scripting::RegistryManager&                            registryManager,
        ::std::unique_ptr<::Scripting::IRuntimeMetadata>         metadata,
        ::Scripting::DependencyLocator*                          locator,
        ::std::unique_ptr<::Scripting::QuickJS::MallocFunctions> mallocFns,
        ::std::function<
            ::std::string(::std::string_view const&, ::std::string const&, ::std::vector<::std::string> const&)>
            normalizerFn
    );

    MCAPI ::Scripting::QuickJS::ContextObject* getContext(::Scripting::ContextId contextId) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::JSModuleDef* _moduleLoader(::JSContext* ctx, char const* moduleName, void* opaque);

    MCAPI static char*
    _moduleNameNormalizer(::JSContext* ctx, char const* baseName, char const* moduleName, void* opaque);

    MCAPI static void _onProfilerCapture(void* opaque, char const* capture);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::IRuntimeMetadata* $getMetadata() const;

    MCAPI void $moveToThread();

    MCAPI ::std::optional<::Scripting::ScriptContext> $createContext(
        ::Scripting::ModuleBindingBundle&& bindings,
        ::Scripting::IDependencyLoader*    loader,
        ::Scripting::IPrinter*             printer,
        ::Scripting::ContextConfig const&  config
    );

    MCAPI void $destroyContext(::Scripting::ContextId contextId);

    MCAPI ::Scripting::ResultAny $runString(
        ::Scripting::ContextId                  contextId,
        ::std::string const&                    scriptName,
        ::std::string const&                    scriptData,
        ::std::optional<::Scripting::Privilege> privilege
    );

    MCAPI ::Scripting::ResultAny $call(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType,
        ::std::optional<::Scripting::Privilege>                  privilege
    );

    MCAPI ::Scripting::ResultAny $resolve(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    );

    MCAPI ::Scripting::ResultAny $reject(
        ::Scripting::ContextId                                   contextId,
        ::Scripting::TypedObjectHandle<::Scripting::PromiseType> promise,
        ::entt::meta_any&                                        arg
    );

    MCAPI ::Scripting::ResultAny $getFutureResult(
        ::Scripting::ContextId                                  contextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::entt::meta_type const&                                expectedResultType
    ) const;

    MCAPI ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
    $executeCoroutines(::std::optional<::std::chrono::microseconds> timeSlice);

    MCAPI bool $hasPendingJobs();

    MCAPI ::Scripting::IDebuggerController* $enableDebugger(::Scripting::IDebuggerTransport& transport);

    MCAPI void $disableDebugger();

    MCAPI void $startProfiler();

    MCAPI void $stopProfiler(
        ::std::function<void(::std::string_view)>                      captureCb,
        ::std::optional<::std::reference_wrapper<::std::string const>> savePathOpt
    );

    MCAPI ::Scripting::RuntimeStats $computeRuntimeStats() const;

    MCAPI ::std::optional<::Scripting::TypeNameInfo>
    $getNameForType(::Scripting::ContextId contextId, ::entt::meta_type const& type, bool allowUnknownTypes) const;

    MCAPI ::Scripting::IWatchdog* $enableWatchdog(::Scripting::WatchdogSettings settings);

    MCAPI void $disableWatchdog();

    MCFOLD ::Scripting::IWatchdog* $getWatchdog() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
