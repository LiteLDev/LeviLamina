/**
 * @file  ScriptPluginManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"
#include "ResourceInformation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPluginManager.
 *
 */
class ScriptPluginManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINMANAGER
public:
    class ScriptPluginManager& operator=(class ScriptPluginManager const &) = delete;
    ScriptPluginManager(class ScriptPluginManager const &) = delete;
    ScriptPluginManager() = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPluginManager\@\@QEAA\@AEAVScriptEngine\@Scripting\@\@_NV?$unique_ptr\@VIScriptTelemetryLogger\@\@U?$default_delete\@VIScriptTelemetryLogger\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptPluginManager(class Scripting::ScriptEngine &, bool, std::unique_ptr<class IScriptTelemetryLogger>);
    /**
     * @symbol ?discoverPlugins\@ScriptPluginManager\@\@QEAA?AVScriptPluginManagerResult\@\@W4ResourceType\@ResourceInformation\@\@AEBVIScriptPluginSourceEnumerator\@\@AEBVScriptPackConfigurationManager\@\@AEBV?$vector\@V?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@V?$allocator\@V?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI class ScriptPluginManagerResult discoverPlugins(enum class ResourceInformation::ResourceType, class IScriptPluginSourceEnumerator const &, class ScriptPackConfigurationManager const &, std::vector<class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)>> const &);
    /**
     * @symbol ?getPluginStats\@ScriptPluginManager\@\@QEBA?AV?$vector\@UScriptPluginStats\@\@V?$allocator\@UScriptPluginStats\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginStats> getPluginStats() const;
    /**
     * @symbol ?getPlugins\@ScriptPluginManager\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VScriptPlugin\@\@U?$default_delete\@VScriptPlugin\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VScriptPlugin\@\@U?$default_delete\@VScriptPlugin\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class ScriptPlugin>> const & getPlugins() const;
    /**
     * @symbol ?releaseAll\@ScriptPluginManager\@\@QEAAXXZ
     */
    MCAPI void releaseAll();
    /**
     * @symbol ?releasePlugins\@ScriptPluginManager\@\@QEAAXXZ
     */
    MCAPI void releasePlugins();
    /**
     * @symbol ?runAll\@ScriptPluginManager\@\@QEAA?AVScriptPluginManagerResult\@\@XZ
     */
    MCAPI class ScriptPluginManagerResult runAll();
    /**
     * @symbol ??1ScriptPluginManager\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginManager();
    /**
     * @symbol ?getPackCapability\@ScriptPluginManager\@\@SA?AVPackCapability\@\@XZ
     */
    MCAPI static class PackCapability getPackCapability();

//private:
    /**
     * @symbol ?_generateModuleDependencies\@ScriptPluginManager\@\@AEBA?AV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@AEBV?$vector\@UModuleIdentifier\@\@V?$allocator\@UModuleIdentifier\@\@\@std\@\@\@3\@AEBV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<struct Scripting::ModuleDescriptor> _generateModuleDependencies(std::vector<struct ModuleIdentifier> const &, std::vector<struct PackIdVersion> const &) const;
    /**
     * @symbol ?_reportContextResults\@ScriptPluginManager\@\@AEAAXAEBUScriptContextResult\@Scripting\@\@AEAVScriptPluginResult\@\@\@Z
     */
    MCAPI void _reportContextResults(struct Scripting::ScriptContextResult const &, class ScriptPluginResult &);
    /**
     * @symbol ?_tryAddRuntime\@ScriptPluginManager\@\@AEAAXAEBVScriptPlugin\@\@AEAVScriptPluginResult\@\@\@Z
     */
    MCAPI void _tryAddRuntime(class ScriptPlugin const &, class ScriptPluginResult &);

private:

};
