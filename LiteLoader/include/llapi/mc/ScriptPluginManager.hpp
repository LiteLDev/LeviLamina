/**
 * @file  ScriptPluginManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -404340786
     * @symbol ??0ScriptPluginManager@@QEAA@AEAVScriptEngine@Scripting@@_NV?$unique_ptr@VIScriptTelemetryLogger@@U?$default_delete@VIScriptTelemetryLogger@@@std@@@std@@@Z
     */
    MCAPI ScriptPluginManager(class Scripting::ScriptEngine &, bool, std::unique_ptr<class IScriptTelemetryLogger>);
    /**
     * @hash   1475348347
     * @symbol ?discoverPlugins@ScriptPluginManager@@QEAA?AVScriptPluginManagerResult@@W4ResourceType@ResourceInformation@@AEBVIScriptPluginSourceEnumerator@@AEBVScriptPackConfigurationManager@@@Z
     */
    MCAPI class ScriptPluginManagerResult discoverPlugins(enum class ResourceInformation::ResourceType, class IScriptPluginSourceEnumerator const &, class ScriptPackConfigurationManager const &);
    /**
     * @symbol ?getPluginStats@ScriptPluginManager@@QEBA?AV?$vector@UScriptPluginStats@@V?$allocator@UScriptPluginStats@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ScriptPluginStats> getPluginStats() const;
    /**
     * @hash   1912551798
     * @symbol ?getPlugins@ScriptPluginManager@@QEBAAEBV?$vector@VScriptPlugin@@V?$allocator@VScriptPlugin@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ScriptPlugin> const & getPlugins() const;
    /**
     * @hash   1422675735
     * @symbol ?releaseAll@ScriptPluginManager@@QEAAXXZ
     */
    MCAPI void releaseAll();
    /**
     * @hash   2050224949
     * @symbol ?releasePlugins@ScriptPluginManager@@QEAAXXZ
     */
    MCAPI void releasePlugins();
    /**
     * @hash   -255154132
     * @symbol ?runAll@ScriptPluginManager@@QEAA?AVScriptPluginManagerResult@@XZ
     */
    MCAPI class ScriptPluginManagerResult runAll();
    /**
     * @hash   98729323
     * @symbol ??1ScriptPluginManager@@QEAA@XZ
     */
    MCAPI ~ScriptPluginManager();

//private:
    /**
     * @symbol ?_generateModuleDependencies@ScriptPluginManager@@AEBA?AV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@AEBV?$vector@UModuleIdentifier@@V?$allocator@UModuleIdentifier@@@std@@@3@AEBV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@3@1@Z
     */
    MCAPI std::vector<struct Scripting::ModuleDescriptor> _generateModuleDependencies(std::vector<struct ModuleIdentifier> const &, std::vector<struct PackIdVersion> const &, std::vector<struct PackIdVersion> const &) const;
    /**
     * @hash   786378284
     * @symbol ?_reportContextResults@ScriptPluginManager@@AEAAXAEBUScriptContextResult@Scripting@@AEAVScriptPluginResult@@@Z
     */
    MCAPI void _reportContextResults(struct Scripting::ScriptContextResult const &, class ScriptPluginResult &);

private:

};