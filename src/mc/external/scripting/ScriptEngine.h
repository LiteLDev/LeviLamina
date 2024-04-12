#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IScriptEngine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IRuntime; }
namespace Scripting { class IScriptEngine; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class RegistryManager; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct ScriptContextResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct UUID; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

class ScriptEngine : public ::Scripting::IScriptEngine {
public:
    // ScriptEngine inner types declare
    // clang-format off
    struct NamedRuntime;
    // clang-format on

    // ScriptEngine inner types define
    struct NamedRuntime {
    public:
        // prevent constructor by default
        NamedRuntime& operator=(NamedRuntime const&);
        NamedRuntime(NamedRuntime const&);
        NamedRuntime();

    public:
        // NOLINTBEGIN
        // symbol: ??1NamedRuntime@ScriptEngine@Scripting@@QEAA@XZ
        MCAPI ~NamedRuntime();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptEngine& operator=(ScriptEngine const&);
    ScriptEngine(ScriptEngine const&);
    ScriptEngine();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptEngine@Scripting@@UEAA@XZ
    virtual ~ScriptEngine() = default;

    // vIndex: 1, symbol:
    // ?createScriptingContext@ScriptEngine@Scripting@@UEAA?AUScriptContextResult@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUModuleDescriptor@2@AEBV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@5@PEAVIDependencyLoader@2@PEAVIPrinter@2@AEBUContextConfig@2@@Z
    virtual struct Scripting::ScriptContextResult
    createScriptingContext(std::string const&, struct Scripting::ModuleDescriptor const&, std::vector<struct Scripting::ModuleDescriptor> const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*, struct Scripting::ContextConfig const&);

    // vIndex: 2, symbol: ?getRegistryManager@ScriptEngine@Scripting@@UEAAAEAVRegistryManager@2@XZ
    virtual class Scripting::RegistryManager& getRegistryManager();

    // symbol: ??0ScriptEngine@Scripting@@QEAA@PEAVRegistryManager@1@@Z
    MCAPI explicit ScriptEngine(class Scripting::RegistryManager*);

    // symbol:
    // ?addModuleBindingFactory@ScriptEngine@Scripting@@QEAAXV?$unique_ptr@VIModuleBindingFactory@Scripting@@U?$default_delete@VIModuleBindingFactory@Scripting@@@std@@@std@@@Z
    MCAPI void addModuleBindingFactory(std::unique_ptr<class Scripting::IModuleBindingFactory>);

    // symbol:
    // ?addRuntime@ScriptEngine@Scripting@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIRuntime@Scripting@@U?$default_delete@VIRuntime@Scripting@@@std@@@4@@Z
    MCAPI void addRuntime(std::string name, std::unique_ptr<class Scripting::IRuntime> runtime);

    // symbol:
    // ?computeRuntimeStats@ScriptEngine@Scripting@@QEBA?AURuntimeStats@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct Scripting::RuntimeStats computeRuntimeStats(std::string const&) const;

    // symbol:
    // ?disableDebugger@ScriptEngine@Scripting@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void disableDebugger(std::string const&);

    // symbol:
    // ?disableWatchdog@ScriptEngine@Scripting@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void disableWatchdog(std::string const&);

    // symbol:
    // ?enableDebugger@ScriptEngine@Scripting@@QEAAPEAVIDebuggerController@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVIDebuggerTransport@2@@Z
    MCAPI class Scripting::IDebuggerController*
    enableDebugger(std::string const&, class Scripting::IDebuggerTransport&);

    // symbol:
    // ?enableWatchdog@ScriptEngine@Scripting@@QEAAPEAVIWatchdog@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUWatchdogSettings@2@@Z
    MCAPI class Scripting::IWatchdog*
    enableWatchdog(std::string const&, struct Scripting::WatchdogSettings const& settings);

    // symbol:
    // ?executeCoroutines@ScriptEngine@Scripting@@QEAAXV?$optional@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@@std@@@Z
    MCAPI void executeCoroutines(std::optional<std::chrono::microseconds>);

    // symbol:
    // ?getModuleDescriptorByName@ScriptEngine@Scripting@@QEBA?AV?$optional@UModuleDescriptor@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<struct Scripting::ModuleDescriptor> getModuleDescriptorByName(std::string const& name) const;

    // symbol:
    // ?getSupportedBindingModules@ScriptEngine@Scripting@@QEBA?AV?$vector@USupportedBindingModule@Scripting@@V?$allocator@USupportedBindingModule@Scripting@@@std@@@std@@XZ
    MCAPI std::vector<struct Scripting::SupportedBindingModule> getSupportedBindingModules() const;

    // symbol:
    // ?getWatchdog@ScriptEngine@Scripting@@QEBAPEAVIWatchdog@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::IWatchdog* getWatchdog(std::string const&) const;

    // symbol: ?hasModuleBindingFactory@ScriptEngine@Scripting@@QEBA_NAEBUUUID@2@@Z
    MCAPI bool hasModuleBindingFactory(struct Scripting::UUID const& uuid) const;

    // symbol:
    // ?hasRuntime@ScriptEngine@Scripting@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasRuntime(std::string const& name) const;

    // symbol: ?releaseRuntimes@ScriptEngine@Scripting@@QEAAXXZ
    MCAPI void releaseRuntimes();

    // symbol:
    // ?startProfiler@ScriptEngine@Scripting@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void startProfiler(std::string const&);

    // symbol:
    // ?stopProfiler@ScriptEngine@Scripting@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void stopProfiler(std::string const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getRuntime@ScriptEngine@Scripting@@AEBAPEAVIRuntime@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::IRuntime* _getRuntime(std::string const&) const;

    // NOLINTEND
};

}; // namespace Scripting
