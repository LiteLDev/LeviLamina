/**
 * @file  ScriptPackConfigurationManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPackConfigurationManager.
 *
 */
class ScriptPackConfigurationManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPACKCONFIGURATIONMANAGER
public:
    class ScriptPackConfigurationManager& operator=(class ScriptPackConfigurationManager const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ScriptPackConfigurationManager\@\@QEAA\@XZ
     */
    MCAPI ScriptPackConfigurationManager();
    /**
     * @symbol  ??0ScriptPackConfigurationManager\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager const &);
    /**
     * @symbol  ?getPackConfiguration\@ScriptPackConfigurationManager\@\@QEBAAEBVScriptPackConfiguration\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ScriptPackConfiguration const & getPackConfiguration(std::string const &) const;
    /**
     * @symbol  ?loadPackConfigs\@ScriptPackConfigurationManager\@\@QEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void loadPackConfigs(class Core::Path const &);

//private:

private:
    /**
     * @symbol  ?sDefaultConfigurationName\@ScriptPackConfigurationManager\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sDefaultConfigurationName;

};