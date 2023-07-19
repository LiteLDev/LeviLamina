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
    ScriptPackConfigurationManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPACKCONFIGURATIONMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPackConfigurationManager();
#endif
    /**
     * @symbol ??0ScriptPackConfigurationManager\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager const &);
    /**
     * @symbol ??0ScriptPackConfigurationManager\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager &&);
    /**
     * @symbol ??0ScriptPackConfigurationManager\@\@QEAA\@V?$optional\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@Z
     */
    MCAPI ScriptPackConfigurationManager(class std::optional<class Core::PathBuffer<std::string>>);
    /**
     * @symbol ?getConfigPath\@ScriptPackConfigurationManager\@\@QEBAAEBV?$optional\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class Core::PathBuffer<std::string>> const & getConfigPath() const;
    /**
     * @symbol ?getPackConfiguration\@ScriptPackConfigurationManager\@\@QEBAAEBVScriptPackConfiguration\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ScriptPackConfiguration const & getPackConfiguration(std::string const &) const;
    /**
     * @symbol ?loadPackConfigs\@ScriptPackConfigurationManager\@\@QEAAXXZ
     */
    MCAPI void loadPackConfigs();

//private:

private:
    /**
     * @symbol ?sDefaultConfigurationName\@ScriptPackConfigurationManager\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sDefaultConfigurationName;

};
