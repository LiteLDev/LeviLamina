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
     * @hash   -114955135
     * @symbol  ??0ScriptPluginResult\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPluginResult(class ScriptPluginResult const &);
    /**
     * @hash   1848709372
     * @symbol  ??0ScriptPluginResult\@\@QEAA\@AEBUModuleDescriptor\@Scripting\@\@\@Z
     */
    MCAPI ScriptPluginResult(struct Scripting::ModuleDescriptor const &);
    /**
     * @hash   219755900
     * @symbol  ?addError\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addError(std::string const &);
    /**
     * @hash   106058135
     * @symbol  ?addErrors\@ScriptPluginResult\@\@QEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void addErrors(std::vector<std::string> const &);
    /**
     * @hash   1669146878
     * @symbol  ?addInfo\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addInfo(std::string const &);
    /**
     * @hash   -1521635780
     * @symbol  ?addWarning\@ScriptPluginResult\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addWarning(std::string const &);
    /**
     * @hash   -167543368
     * @symbol  ?getErrors\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UError\@ScriptPluginResult\@\@V?$allocator\@UError\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Error> const & getErrors() const;
    /**
     * @hash   825280554
     * @symbol  ?getInfos\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UInfo\@ScriptPluginResult\@\@V?$allocator\@UInfo\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Info> const & getInfos() const;
    /**
     * @hash   -794633880
     * @symbol  ?getModuleDescriptor\@ScriptPluginResult\@\@QEBAAEBUModuleDescriptor\@Scripting\@\@XZ
     */
    MCAPI struct Scripting::ModuleDescriptor const & getModuleDescriptor() const;
    /**
     * @hash   1374368872
     * @symbol  ?getWarnings\@ScriptPluginResult\@\@QEBAAEBV?$vector\@UWarning\@ScriptPluginResult\@\@V?$allocator\@UWarning\@ScriptPluginResult\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScriptPluginResult::Warning> const & getWarnings() const;
    /**
     * @hash   571040276
     * @symbol  ?hasErrors\@ScriptPluginResult\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @hash   1245033637
     * @symbol  ??1ScriptPluginResult\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginResult();

};