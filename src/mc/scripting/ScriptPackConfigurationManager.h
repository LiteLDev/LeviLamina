#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

class ScriptPackConfigurationManager {

public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const&) = delete;
    ScriptPackConfigurationManager()                                                 = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPACKCONFIGURATIONMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPackConfigurationManager(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptPackConfigurationManager\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager const&); // NOLINT
    /**
     * @symbol ??0ScriptPackConfigurationManager\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager&&); // NOLINT
    /**
     * @symbol
     * ??0ScriptPackConfigurationManager\@\@QEAA\@V?$optional\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@Z
     */
    MCAPI ScriptPackConfigurationManager(class std::optional<class Core::PathBuffer<std::string>>); // NOLINT
    /**
     * @symbol
     * ?getConfigPath\@ScriptPackConfigurationManager\@\@QEBAAEBV?$optional\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class Core::PathBuffer<std::string>> const& getConfigPath() const; // NOLINT
    /**
     * @symbol
     * ?getPackConfiguration\@ScriptPackConfigurationManager\@\@QEBAAEBVScriptPackConfiguration\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ScriptPackConfiguration const& getPackConfiguration(std::string const&) const; // NOLINT
    /**
     * @symbol ?loadPackConfigs\@ScriptPackConfigurationManager\@\@QEAAXXZ
     */
    MCAPI void loadPackConfigs(); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?sDefaultConfigurationName\@ScriptPackConfigurationManager\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sDefaultConfigurationName; // NOLINT
};
