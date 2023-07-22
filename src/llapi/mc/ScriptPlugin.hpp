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
     * @symbol  ??0ScriptPlugin\@\@QEAA\@$$QEAUModuleDescriptor\@Scripting\@\@$$QEAV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@$$QEAUCapabilities\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@33$$QEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI ScriptPlugin(struct Scripting::ModuleDescriptor &&, std::vector<struct Scripting::ModuleDescriptor> &&, struct Scripting::Capabilities &&, std::string const &, std::string const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &&);
    /**
     * @symbol  ??0ScriptPlugin\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ScriptPlugin(class ScriptPlugin &&);
    /**
     * @symbol  ?getCapabilities\@ScriptPlugin\@\@QEBAAEBUCapabilities\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::Capabilities const & getCapabilities() const;
    /**
     * @symbol  ?getEngineVersion\@ScriptPlugin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getEngineVersion() const;
    /**
     * @symbol  ?getModuleDependencies\@ScriptPlugin\@\@QEBAAEBV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct Scripting::ModuleDescriptor> const & getModuleDependencies() const;
    /**
     * @symbol  ?getModuleDescriptor\@ScriptPlugin\@\@QEBAAEBUModuleDescriptor\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::ModuleDescriptor const & getModuleDescriptor() const;
    /**
     * @symbol  ?getRuntimeName\@ScriptPlugin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRuntimeName() const;
    /**
     * @symbol  ?getScriptContext\@ScriptPlugin\@\@QEAAAEAVScriptContext\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ScriptContext & getScriptContext();
    /**
     * @symbol  ?getScriptMainName\@ScriptPlugin\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getScriptMainName() const;
    /**
     * @symbol  ?hasErrors\@ScriptPlugin\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @symbol  ?loadScriptMain\@ScriptPlugin\@\@QEAA?AV?$optional\@UScriptData\@Scripting\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct Scripting::ScriptData> loadScriptMain();
    /**
     * @symbol  ?reportErrors\@ScriptPlugin\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> reportErrors() const;
    /**
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