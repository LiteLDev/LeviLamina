#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptContextResult; }
// clang-format on

class ScriptPluginManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINMANAGER
public:
    ScriptPluginManager& operator=(ScriptPluginManager const&) = delete;
    ScriptPluginManager(ScriptPluginManager const&)            = delete;
    ScriptPluginManager()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?discoverPlugins\@ScriptPluginManager\@\@QEAA?AVScriptPluginManagerResult\@\@W4ResourceType\@ResourceInformation\@\@AEBVIScriptPluginSourceEnumerator\@\@AEBVScriptPackConfigurationManager\@\@AEBV?$vector\@V?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@V?$allocator\@V?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI class ScriptPluginManagerResult
    discoverPlugins(enum class ResourceInformation::ResourceType, class IScriptPluginSourceEnumerator const&, class ScriptPackConfigurationManager const&, std::vector<class std::function<bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>> const&);
    /**
     * @symbol
     * ?getPluginStats\@ScriptPluginManager\@\@QEBA?AV?$vector\@UScriptPluginStats\@\@V?$allocator\@UScriptPluginStats\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginStats> getPluginStats() const;
    /**
     * @symbol ?releasePlugins\@ScriptPluginManager\@\@QEAAXXZ
     */
    MCAPI void releasePlugins();
    /**
     * @symbol ?runAll\@ScriptPluginManager\@\@QEAA?AVScriptPluginManagerResult\@\@XZ
     */
    MCAPI class ScriptPluginManagerResult runAll();
    /**
     * @symbol ?getPackCapability\@ScriptPluginManager\@\@SA?AVPackCapability\@\@XZ
     */
    MCAPI static class PackCapability getPackCapability();

    // private:
    /**
     * @symbol
     * ?_generateModuleDependencies\@ScriptPluginManager\@\@AEBA?AV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@AEBV?$vector\@UModuleIdentifier\@\@V?$allocator\@UModuleIdentifier\@\@\@std\@\@\@3\@AEBV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<struct Scripting::ModuleDescriptor>
    _generateModuleDependencies(std::vector<struct ModuleIdentifier> const&, std::vector<struct PackIdVersion> const&)
        const;
    /**
     * @symbol
     * ?_reportContextResults\@ScriptPluginManager\@\@AEAAXAEBUScriptContextResult\@Scripting\@\@AEAVScriptPluginResult\@\@\@Z
     */
    MCAPI void _reportContextResults(struct Scripting::ScriptContextResult const&, class ScriptPluginResult&);
    /**
     * @symbol ?_tryAddRuntime\@ScriptPluginManager\@\@AEAAXAEBVScriptPlugin\@\@AEAVScriptPluginResult\@\@\@Z
     */
    MCAPI void _tryAddRuntime(class ScriptPlugin const&, class ScriptPluginResult&);

private:
};
