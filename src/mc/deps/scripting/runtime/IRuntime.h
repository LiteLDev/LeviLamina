#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/reflection/Privilege.h"
#include "mc/deps/scripting/runtime/FutureStatus.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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
    virtual ~IRuntime() = default;

    virtual ::Scripting::IRuntimeMetadata* getMetadata() const;

    virtual void moveToThread();

    virtual ::std::optional<::Scripting::ScriptContext> createContext(
        ::Scripting::ModuleBindingBundle&&,
        ::Scripting::IDependencyLoader*,
        ::Scripting::IPrinter*,
        ::Scripting::ContextConfig const&
    ) = 0;

    virtual void destroyContext(::Scripting::ContextId) = 0;

    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId, ::Scripting::IPayload*, ::std::optional<::Scripting::Privilege>) = 0;

    virtual ::Scripting::ResultAny call(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType>,
        ::entt::meta_any*,
        uint,
        ::entt::meta_type const&,
        ::std::optional<::Scripting::Privilege>
    ) = 0;

    virtual ::Scripting::ResultAny
    resolve(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&) = 0;

    virtual ::Scripting::ResultAny
    reject(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::PromiseType>, ::entt::meta_any&) = 0;

    virtual ::Scripting::FutureStatus
        getFutureStatus(::Scripting::ContextId, ::Scripting::TypedObjectHandle<::Scripting::FutureType>) const = 0;

    virtual ::Scripting::ResultAny getFutureResult(
        ::Scripting::ContextId,
        ::Scripting::TypedObjectHandle<::Scripting::FutureType>,
        ::entt::meta_type const&
    ) const = 0;

    virtual ::Scripting::Result_deprecated<::Scripting::CoRoutineResult>
        executeCoroutines(::std::optional<::std::chrono::microseconds>, ::std::optional<::Scripting::Privilege>) = 0;

    virtual bool hasPendingJobs() = 0;

    virtual ::Scripting::IDebuggerController* enableDebugger(::Scripting::IDebuggerTransport&) = 0;

    virtual void disableDebugger() = 0;

    virtual void startProfiler() = 0;

    virtual void stopProfiler(
        ::std::function<void(::std::string_view)>,
        ::std::optional<::std::reference_wrapper<::std::string const>>
    ) = 0;

    virtual ::Scripting::RuntimeStats computeRuntimeStats() const = 0;

    virtual ::Scripting::IWatchdog* enableWatchdog(::Scripting::WatchdogSettings) = 0;

    virtual void disableWatchdog() = 0;

    virtual ::Scripting::IWatchdog* getWatchdog() const = 0;

    virtual ::std::optional<::Scripting::TypeNameInfo>
    getNameForType(::Scripting::ContextId, ::entt::meta_type const&, bool) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::Scripting::IRuntimeMetadata* $getMetadata() const;

    MCNAPI void $moveToThread();
#endif


    // NOLINTEND
};

} // namespace Scripting
