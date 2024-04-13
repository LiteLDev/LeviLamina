#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/FutureStatus.h"
#include "mc/external/scripting/Privilege.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StringBasedRuntime.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptContext; }
namespace Scripting { class StringBasedRuntime; }
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
namespace Scripting::QuickJS { class ContextObject; }
namespace Scripting::QuickJS { struct MallocFunctions; }
struct JSContext;
struct JSModuleDef;
// clang-format on

namespace Scripting::QuickJS {

class QuickJSRuntime : public ::Scripting::StringBasedRuntime {
public:
    // prevent constructor by default
    QuickJSRuntime& operator=(QuickJSRuntime const&);
    QuickJSRuntime(QuickJSRuntime const&);
    QuickJSRuntime();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1QuickJSRuntime@QuickJS@Scripting@@UEAA@XZ
    virtual ~QuickJSRuntime() = default;

    // vIndex: 1, symbol:
    // ?createContext@QuickJSRuntime@QuickJS@Scripting@@UEAA?AV?$optional@VScriptContext@Scripting@@@std@@$$QEAUModuleBindingBundle@3@PEAVIDependencyLoader@3@PEAVIPrinter@3@AEBUContextConfig@3@@Z
    virtual std::optional<class Scripting::ScriptContext> createContext(
        struct Scripting::ModuleBindingBundle&& bindings,
        class Scripting::IDependencyLoader*     loader,
        class Scripting::IPrinter*,
        struct Scripting::ContextConfig const& config
    );

    // vIndex: 2, symbol: ?destroyContext@QuickJSRuntime@QuickJS@Scripting@@UEAAXUContextId@3@@Z
    virtual void destroyContext(struct Scripting::ContextId);

    // vIndex: 3, symbol:
    // ?run@StringBasedRuntime@Scripting@@UEAA?AVResultAny@2@UContextId@2@PEAVIPayload@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    virtual class Scripting::ResultAny
    run(struct Scripting::ContextId, class Scripting::IPayload* payload, std::optional<::Scripting::Privilege>);

    // vIndex: 4, symbol:
    // ?call@QuickJSRuntime@QuickJS@Scripting@@UEAA?AVResultAny@3@UContextId@3@U?$TypedObjectHandle@UClosureType@Scripting@@@3@PEAVmeta_any@entt@@IAEBVmeta_type@8@V?$optional@W4Privilege@Scripting@@@std@@@Z
    virtual class Scripting::ResultAny
    call(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>, entt::meta_any* args, uint argc, entt::meta_type const&, std::optional<::Scripting::Privilege>);

    // vIndex: 5, symbol:
    // ?resolve@QuickJSRuntime@QuickJS@Scripting@@UEAA?AVResultAny@3@UContextId@3@U?$TypedObjectHandle@UPromiseType@Scripting@@@3@AEAVmeta_any@entt@@@Z
    virtual class Scripting::ResultAny resolve(
        struct Scripting::ContextId,
        struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>,
        entt::meta_any& arg
    );

    // vIndex: 6, symbol:
    // ?reject@QuickJSRuntime@QuickJS@Scripting@@UEAA?AVResultAny@3@UContextId@3@U?$TypedObjectHandle@UPromiseType@Scripting@@@3@AEAVmeta_any@entt@@@Z
    virtual class Scripting::ResultAny reject(
        struct Scripting::ContextId,
        struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>,
        entt::meta_any& arg
    );

    // vIndex: 7, symbol:
    // ?getFutureStatus@QuickJSRuntime@QuickJS@Scripting@@UEBA?AW4FutureStatus@3@UContextId@3@U?$TypedObjectHandle@UFutureType@Scripting@@@3@@Z
    virtual ::Scripting::FutureStatus
        getFutureStatus(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>)
            const;

    // vIndex: 8, symbol:
    // ?getFutureResult@QuickJSRuntime@QuickJS@Scripting@@UEBA?AVResultAny@3@UContextId@3@U?$TypedObjectHandle@UFutureType@Scripting@@@3@AEBVmeta_type@entt@@@Z
    virtual class Scripting::ResultAny
    getFutureResult(struct Scripting::ContextId, struct Scripting::TypedObjectHandle<struct Scripting::FutureType>, entt::meta_type const&)
        const;

    // vIndex: 9, symbol:
    // ?executeCoroutines@QuickJSRuntime@QuickJS@Scripting@@UEAA?AV?$Result@UCoRoutineResult@Scripting@@$$V@3@V?$optional@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@@std@@@Z
    virtual class Scripting::Result<struct Scripting::CoRoutineResult>
        executeCoroutines(std::optional<std::chrono::microseconds>);

    // vIndex: 10, symbol: ?hasPendingJobs@QuickJSRuntime@QuickJS@Scripting@@UEAA_NXZ
    virtual bool hasPendingJobs();

    // vIndex: 11, symbol:
    // ?enableDebugger@QuickJSRuntime@QuickJS@Scripting@@UEAAPEAVIDebuggerController@3@AEAVIDebuggerTransport@3@@Z
    virtual class Scripting::IDebuggerController* enableDebugger(class Scripting::IDebuggerTransport&);

    // vIndex: 12, symbol: ?disableDebugger@QuickJSRuntime@QuickJS@Scripting@@UEAAXXZ
    virtual void disableDebugger();

    // vIndex: 13, symbol: ?startProfiler@QuickJSRuntime@QuickJS@Scripting@@UEAAXXZ
    virtual void startProfiler();

    // vIndex: 14, symbol:
    // ?stopProfiler@QuickJSRuntime@QuickJS@Scripting@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void stopProfiler(std::string const&);

    // vIndex: 15, symbol: ?computeRuntimeStats@QuickJSRuntime@QuickJS@Scripting@@UEBA?AURuntimeStats@3@XZ
    virtual struct Scripting::RuntimeStats computeRuntimeStats() const;

    // vIndex: 16, symbol: ?enableWatchdog@QuickJSRuntime@QuickJS@Scripting@@UEAAPEAVIWatchdog@3@UWatchdogSettings@3@@Z
    virtual class Scripting::IWatchdog* enableWatchdog(struct Scripting::WatchdogSettings settings);

    // vIndex: 17, symbol: ?disableWatchdog@QuickJSRuntime@QuickJS@Scripting@@UEAAXXZ
    virtual void disableWatchdog();

    // vIndex: 18, symbol: ?getWatchdog@QuickJSRuntime@QuickJS@Scripting@@UEBAPEAVIWatchdog@3@XZ
    virtual class Scripting::IWatchdog* getWatchdog() const;

    // vIndex: 19, symbol:
    // ?getNameForType@QuickJSRuntime@QuickJS@Scripting@@UEBA?AV?$optional@UTypeNameInfo@Scripting@@@std@@UContextId@3@AEBVmeta_type@entt@@_N@Z
    virtual std::optional<struct Scripting::TypeNameInfo>
    getNameForType(struct Scripting::ContextId, entt::meta_type const&, bool) const;

    // vIndex: 20, symbol:
    // ?runString@QuickJSRuntime@QuickJS@Scripting@@UEAA?AVResultAny@3@UContextId@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1V?$optional@W4Privilege@Scripting@@@7@@Z
    virtual class Scripting::ResultAny
    runString(struct Scripting::ContextId, std::string const& scriptName, std::string const& scriptData, std::optional<::Scripting::Privilege>);

    // symbol:
    // ??0QuickJSRuntime@QuickJS@Scripting@@QEAA@AEAVRegistryManager@2@PEAVDependencyLocator@2@V?$unique_ptr@UMallocFunctions@QuickJS@Scripting@@U?$default_delete@UMallocFunctions@QuickJS@Scripting@@@std@@@std@@V?$function@$$A6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@2@AEBV12@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@Z@6@@Z
    MCAPI
    QuickJSRuntime(class Scripting::RegistryManager&, class Scripting::DependencyLocator* locator, std::unique_ptr<struct Scripting::QuickJS::MallocFunctions>, std::function<std::string(std::string_view const&, std::string const&, std::vector<std::string> const&)>);

    // symbol: ?getContext@QuickJSRuntime@QuickJS@Scripting@@QEBAPEAVContextObject@23@UContextId@3@@Z
    MCAPI class Scripting::QuickJS::ContextObject* getContext(struct Scripting::ContextId) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_moduleLoader@QuickJSRuntime@QuickJS@Scripting@@CAPEAUJSModuleDef@@PEAUJSContext@@PEBDPEAX@Z
    MCAPI static struct JSModuleDef* _moduleLoader(struct JSContext* ctx, char const*, void* opaque);

    // symbol: ?_moduleNameNormalizer@QuickJSRuntime@QuickJS@Scripting@@CAPEADPEAUJSContext@@PEBD1PEAX@Z
    MCAPI static char* _moduleNameNormalizer(struct JSContext* ctx, char const*, char const*, void* opaque);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
