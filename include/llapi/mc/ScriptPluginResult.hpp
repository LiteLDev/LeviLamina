/**
 * @file  ScriptPluginResult.hpp
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
 * @brief MC class ScriptPluginResult.
 *
 */
class ScriptPluginResult {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINRESULT
public:
    class ScriptPluginResult& operator=(class ScriptPluginResult const &) = delete;
    ScriptPluginResult() = delete;
#endif

public:
    /**
     * @symbol  ??0ScriptPluginResult\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPluginResult(class ScriptPluginResult const &);
    /**
     * @symbol  ??0ScriptPluginResult\@\@QEAA\@AEBUModuleDescriptor\@Scripting\@\@\@Z
     */
    MCAPI ScriptPluginResult(struct Scripting::ModuleDescriptor const &);
    /**
     * @symbol  ?addError\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addError(std::string const &);
    /**
     * @symbol  ?addErrors\@ScriptPluginResult\@\@QEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void addErrors(std::vector<std::string> const &);
    /**
     * @symbol  ?addInfo\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addInfo(std::string const &);
    /**
     * @symbol  ?addWarning\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addWarning(std::string const &);
    /**
     * @symbol  ?getErrors\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UError\@ScriptPluginResult\@\@V?$allocator\@UError\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Error> const & getErrors() const;
    /**
     * @symbol  ?getInfos\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UInfo\@ScriptPluginResult\@\@V?$allocator\@UInfo\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Info> const & getInfos() const;
    /**
     * @symbol  ?getModuleDescriptor\@ScriptPluginResult\@\@QEBAAEBUModuleDescriptor\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::ModuleDescriptor const & getModuleDescriptor() const;
    /**
     * @symbol  ?getWarnings\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UWarning\@ScriptPluginResult\@\@V?$allocator\@UWarning\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Warning> const & getWarnings() const;
    /**
     * @symbol  ?hasErrors\@ScriptPluginResult\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @symbol  ??1ScriptPluginResult\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginResult();

};