/**
 * @file  ScriptPlugin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptPlugin();
    /**
     * @vftbl  1
     * @symbol  ?onLoadScript\@ScriptPlugin\@\@UEAA?AV?$optional\@UScriptData\@Scripting\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@V?$optional\@V?$vector\@UModuleBinding\@Scripting\@\@V?$allocator\@UModuleBinding\@Scripting\@\@\@std\@\@\@std\@\@\@3\@\@Z
     */
    virtual class std::optional<struct Scripting::ScriptData> onLoadScript(std::string const &, class std::optional<std::vector<struct Scripting::ModuleBinding>>);
    /**
     * @hash   -1267725168
     * @symbol  ??0ScriptPlugin\@\@QEAA\@$$QEAUModuleDescriptor\@Scripting\@\@$$QEAV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@$$QEAUCapabilities\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@33$$QEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI ScriptPlugin(struct Scripting::ModuleDescriptor &&, std::vector<struct Scripting::ModuleDescriptor> &&, struct Scripting::Capabilities &&, std::string const &, std::string const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &&);
    /**
     * @hash   805459701
     * @symbol  ??0ScriptPlugin\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ScriptPlugin(class ScriptPlugin &&);
    /**
     * @hash   -1175348286
     * @symbol  ?getCapabilities\@ScriptPlugin\@\@QEBAAEBUCapabilities\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::Capabilities const & getCapabilities() const;
    /**
     * @hash   -535747858
     * @symbol  ?getEngineVersion\@ScriptPlugin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getEngineVersion() const;
    /**
     * @hash   -45908136
     * @symbol  ?getModuleDependencies\@ScriptPlugin\@\@QEBAAEBV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct Scripting::ModuleDescriptor> const & getModuleDependencies() const;
    /**
     * @hash   822385058
     * @symbol  ?getModuleDescriptor\@ScriptPlugin\@\@QEBAAEBUModuleDescriptor\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::ModuleDescriptor const & getModuleDescriptor() const;
    /**
     * @hash   1442178574
     * @symbol  ?getRuntimeName\@ScriptPlugin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRuntimeName() const;
    /**
     * @hash   -990105280
     * @symbol  ?getScriptContext\@ScriptPlugin\@\@QEAAAEAVScriptContext\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ScriptContext & getScriptContext();
    /**
     * @hash   1041270252
     * @symbol  ?getScriptMainName\@ScriptPlugin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getScriptMainName() const;
    /**
     * @hash   1021472062
     * @symbol  ?hasErrors\@ScriptPlugin\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @symbol  ?loadScriptMain\@ScriptPlugin\@\@QEAA?AV?$optional\@UScriptData\@Scripting\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct Scripting::ScriptData> loadScriptMain();
    /**
     * @hash   -1936370697
     * @symbol  ?reportErrors\@ScriptPlugin\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> reportErrors() const;
    /**
     * @hash   1536245500
     * @symbol  ?setScriptContext\@ScriptPlugin\@\@QEAAX$$QEAVScriptContext\@Scripting\@\@\@Z
     */
    MCAPI void setScriptContext(class Scripting::ScriptContext &&);

//private:
    /**
     * @symbol  ?_loadScript\@ScriptPlugin\@\@AEAA?AV?$optional\@UScriptData\@Scripting\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<struct Scripting::ScriptData> _loadScript(std::string const &);

private:

};