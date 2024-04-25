#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptContextResult; }
// clang-format on

class ScriptPluginManager {
public:
    // prevent constructor by default
    ScriptPluginManager& operator=(ScriptPluginManager const&);
    ScriptPluginManager(ScriptPluginManager const&);
    ScriptPluginManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ?discoverPlugins@ScriptPluginManager@@QEAA?AVScriptPluginManagerResult@@W4ResourceType@ResourceInformation@@AEAVIScriptPluginSourceEnumerator@@AEBVScriptPackConfigurationManager@@PEAVDependencyLocator@Scripting@@AEBV?$vector@V?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@V?$allocator@V?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@@2@@std@@@Z
    MCAPI class ScriptPluginManagerResult
    discoverPlugins(::ResourceInformation::ResourceType, class IScriptPluginSourceEnumerator&, class ScriptPackConfigurationManager const&, class Scripting::DependencyLocator*, std::vector<std::function<bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>> const&);

    // symbol:
    // ?getPluginStats@ScriptPluginManager@@QEBA?AV?$vector@UScriptPluginStats@@V?$allocator@UScriptPluginStats@@@std@@@std@@XZ
    MCAPI std::vector<struct ScriptPluginStats> getPluginStats() const;

    // symbol: ?releasePlugins@ScriptPluginManager@@QEAAXXZ
    MCAPI void releasePlugins();

    // symbol:
    // ?runAll@ScriptPluginManager@@QEAA?AVScriptPluginManagerResult@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI class ScriptPluginManagerResult runAll(std::vector<std::string>);

    // symbol: ?getPackCapability@ScriptPluginManager@@SA?AVPackCapability@@XZ
    MCAPI static class PackCapability getPackCapability();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateModuleDependencies@ScriptPluginManager@@AEBA?AV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@AEBV?$vector@UModuleIdentifier@@V?$allocator@UModuleIdentifier@@@std@@@3@AEBV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@3@@Z
    MCAPI std::vector<struct Scripting::ModuleDescriptor>
    _generateModuleDependencies(std::vector<struct ModuleIdentifier> const&, std::vector<struct PackIdVersion> const&)
        const;

    // symbol:
    // ?_reportContextResults@ScriptPluginManager@@AEAAXAEBUScriptContextResult@Scripting@@AEAVScriptPluginResult@@@Z
    MCAPI void _reportContextResults(struct Scripting::ScriptContextResult const&, class ScriptPluginResult&);

    // symbol: ?_runPlugin@ScriptPluginManager@@AEAAXAEAVScriptPlugin@@AEAVScriptPluginResult@@@Z
    MCAPI void _runPlugin(class ScriptPlugin&, class ScriptPluginResult&);

    // symbol:
    // ?_tryAddRuntime@ScriptPluginManager@@AEAAXAEBVScriptPlugin@@AEAVScriptPluginResult@@PEAVDependencyLocator@Scripting@@@Z
    MCAPI void
    _tryAddRuntime(class ScriptPlugin const&, class ScriptPluginResult&, class Scripting::DependencyLocator*);

    // NOLINTEND
};
