#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/FutureStatus.h"
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

class NativeRuntime {
public:
    // prevent constructor by default
    NativeRuntime& operator=(NativeRuntime const&);
    NativeRuntime(NativeRuntime const&);
    NativeRuntime();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NativeRuntime@Scripting@@UEAA@XZ
    virtual ~NativeRuntime() = default;

    // vIndex: 1, symbol:
    // ?createContext@NativeRuntime@Scripting@@UEAA?AV?$optional@VScriptContext@Scripting@@@std@@AEBUModuleBindingBundle@2@PEAVIDependencyLoader@2@PEAVIPrinter@2@AEBUContextConfig@2@@Z
    virtual std::optional<class Scripting::ScriptContext>
    createContext(struct Scripting::ModuleBindingBundle const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*, struct Scripting::ContextConfig const&);

    // vIndex: 2, symbol: ?destroyContext@NativeRuntime@Scripting@@UEAAXUContextId@2@@Z
    virtual void destroyContext(struct Scripting::ContextId);

    // vIndex: 3, symbol:
    // ?run@NativeRuntime@Scripting@@UEAA?AVResultAny@2@UContextId@2@PEAVIPayload@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    virtual class Scripting::ResultAny
    run(struct Scripting::ContextId, class Scripting::IPayload*, std::optional<::Scripting::Privilege>);

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: ?hasPendingJobs@NativeRuntime@Scripting@@UEAA_NXZ
    virtual bool hasPendingJobs();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: ?computeRuntimeStats@NativeRuntime@Scripting@@UEBA?AURuntimeStats@2@XZ
    virtual struct Scripting::RuntimeStats computeRuntimeStats() const;

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol:
    // ?getNameForType@NativeRuntime@Scripting@@UEBA?AV?$optional@UTypeNameInfo@Scripting@@@std@@UContextId@2@AEBVmeta_type@entt@@_N@Z
    virtual std::optional<struct Scripting::TypeNameInfo>
    getNameForType(struct Scripting::ContextId, entt::meta_type const&, bool) const;

    // symbol:
    // ?call@NativeRuntime@Scripting@@UEAA?AVResultAny@2@UContextId@2@U?$TypedObjectHandle@UClosureType@Scripting@@@2@PEAVmeta_any@entt@@IAEBVmeta_type@7@V?$optional@W4Privilege@Scripting@@@std@@@Z
    MCVAPI class Scripting::ResultAny
    call(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>, entt::meta_any*, uint, entt::meta_type const&, std::optional<::Scripting::Privilege>);

    // symbol: ?disableDebugger@NativeRuntime@Scripting@@UEAAXXZ
    MCVAPI void disableDebugger();

    // symbol: ?disableWatchdog@NativeRuntime@Scripting@@UEAAXXZ
    MCVAPI void disableWatchdog();

    // symbol: ?enableDebugger@NativeRuntime@Scripting@@UEAAPEAVIDebuggerController@2@AEAVIDebuggerTransport@2@@Z
    MCVAPI class Scripting::IDebuggerController* enableDebugger(class Scripting::IDebuggerTransport&);

    // symbol: ?enableWatchdog@NativeRuntime@Scripting@@UEAAPEAVIWatchdog@2@UWatchdogSettings@2@@Z
    MCVAPI class Scripting::IWatchdog* enableWatchdog(struct Scripting::WatchdogSettings);

    // symbol:
    // ?executeCoroutines@NativeRuntime@Scripting@@UEAA?AV?$Result@UCoRoutineResult@Scripting@@$$V@2@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@@Z
    MCVAPI class Scripting::Result<struct Scripting::CoRoutineResult> executeCoroutines(std::chrono::microseconds);

    // symbol:
    // ?getFutureResult@NativeRuntime@Scripting@@UEBA?AVResultAny@2@UContextId@2@U?$TypedObjectHandle@UFutureType@Scripting@@@2@AEBVmeta_type@entt@@@Z
    MCVAPI class Scripting::ResultAny
    getFutureResult(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>, entt::meta_type const&)
        const;

    // symbol:
    // ?getFutureStatus@NativeRuntime@Scripting@@UEBA?AW4FutureStatus@2@UContextId@2@U?$TypedObjectHandle@UFutureType@Scripting@@@2@@Z
    MCVAPI ::Scripting::FutureStatus
        getFutureStatus(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>)
            const;

    // symbol: ?getWatchdog@NativeRuntime@Scripting@@UEBAPEAVIWatchdog@2@XZ
    MCVAPI class Scripting::IWatchdog* getWatchdog() const;

    // symbol:
    // ?reject@NativeRuntime@Scripting@@UEAA?AVResultAny@2@UContextId@2@U?$TypedObjectHandle@UPromiseType@Scripting@@@2@AEAVmeta_any@entt@@@Z
    MCVAPI class Scripting::ResultAny
    reject(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>, entt::meta_any&);

    // symbol:
    // ?resolve@NativeRuntime@Scripting@@UEAA?AVResultAny@2@UContextId@2@U?$TypedObjectHandle@UPromiseType@Scripting@@@2@AEAVmeta_any@entt@@@Z
    MCVAPI class Scripting::ResultAny
    resolve(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>, entt::meta_any&);

    // symbol: ?startProfiler@NativeRuntime@Scripting@@UEAAXXZ
    MCVAPI void startProfiler();

    // symbol:
    // ?stopProfiler@NativeRuntime@Scripting@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void stopProfiler(std::string const&);

    // symbol: ??0NativeRuntime@Scripting@@QEAA@AEAVRegistryManager@1@@Z
    MCAPI explicit NativeRuntime(class Scripting::RegistryManager&);

    // symbol:
    // ?runFunction@NativeRuntime@Scripting@@QEAA?AVResultAny@2@UContextId@2@AEBV?$function@$$A6A?AVResultAny@Scripting@@AEAVNativeRuntime@2@UContextId@2@VWeakLifetimeScope@2@AEBUModuleBindingBundle@2@PEAVIDependencyLoader@2@PEAVIPrinter@2@@Z@std@@@Z
    MCAPI class Scripting::ResultAny
    runFunction(struct Scripting::ContextId, std::function<class Scripting::ResultAny(class Scripting::NativeRuntime&, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, struct Scripting::ModuleBindingBundle const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*)> const&);

    // NOLINTEND
};

}; // namespace Scripting
