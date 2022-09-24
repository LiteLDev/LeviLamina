/**
 * @file  ScriptPlugin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPlugin.
 *
 */
class ScriptPlugin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGIN
public:
    class ScriptPlugin& operator=(class ScriptPlugin const &) = delete;
    ScriptPlugin(class ScriptPlugin const &) = delete;
    ScriptPlugin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptPlugin();
    /**
     * @hash   -182316294
     * @vftbl  1
     * @symbol ?onLoadScript@ScriptPlugin@@UEAA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    virtual class std::optional<std::string> onLoadScript(std::string const &);
    /**
     * @hash   -30626104
     * @symbol ??0ScriptPlugin@@QEAA@$$QEAUModuleDescriptor@Scripting@@$$QEAV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@22$$QEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@4@@Z
     */
    MCAPI ScriptPlugin(struct Scripting::ModuleDescriptor &&, std::vector<struct Scripting::ModuleDescriptor> &&, std::string const &, std::string const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &&);
    /**
     * @hash   52461637
     * @symbol ??0ScriptPlugin@@QEAA@$$QEAV0@@Z
     */
    MCAPI ScriptPlugin(class ScriptPlugin &&);
    /**
     * @hash   -1256873074
     * @symbol ?getEngineVersion@ScriptPlugin@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getEngineVersion() const;
    /**
     * @hash   -1718478664
     * @symbol ?getModuleDependencies@ScriptPlugin@@QEBAAEBV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct Scripting::ModuleDescriptor> const & getModuleDependencies() const;
    /**
     * @hash   725762274
     * @symbol ?getModuleDescriptor@ScriptPlugin@@QEBAAEBUModuleDescriptor@Scripting@@XZ
     */
    MCAPI struct Scripting::ModuleDescriptor const & getModuleDescriptor() const;
    /**
     * @hash   21826766
     * @symbol ?getRuntimeName@ScriptPlugin@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getRuntimeName() const;
    /**
     * @symbol ?getScriptContext@ScriptPlugin@@QEAAAEAVScriptContext@Scripting@@XZ
     */
    MCAPI class Scripting::ScriptContext & getScriptContext();
    /**
     * @hash   664916650
     * @symbol ?getScriptContext@ScriptPlugin@@QEBAAEBVScriptContext@Scripting@@XZ
     */
    MCAPI class Scripting::ScriptContext const & getScriptContext() const;
    /**
     * @hash   -1009975812
     * @symbol ?getScriptMainName@ScriptPlugin@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getScriptMainName() const;
    /**
     * @hash   261293406
     * @symbol ?hasErrors@ScriptPlugin@@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @hash   -347561063
     * @symbol ?loadScriptMain@ScriptPlugin@@QEAA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@XZ
     */
    MCAPI class std::optional<std::string> loadScriptMain();
    /**
     * @hash   1597741399
     * @symbol ?reportErrors@ScriptPlugin@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> reportErrors() const;
    /**
     * @hash   774806012
     * @symbol ?setScriptContext@ScriptPlugin@@QEAAX$$QEAVScriptContext@Scripting@@@Z
     */
    MCAPI void setScriptContext(class Scripting::ScriptContext &&);

//private:
    /**
     * @hash   224913045
     * @symbol ?_loadScript@ScriptPlugin@@AEAA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI class std::optional<std::string> _loadScript(std::string const &);

private:

};