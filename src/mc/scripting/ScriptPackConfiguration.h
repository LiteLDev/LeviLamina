#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptPackConfiguration {

public:
    // prevent constructor by default
    ScriptPackConfiguration& operator=(ScriptPackConfiguration const&) = delete;
    ScriptPackConfiguration()                                          = delete;

public:
    /**
     * @symbol ??0ScriptPackConfiguration\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration&&); // NOLINT
    /**
     * @symbol ??0ScriptPackConfiguration\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration const&); // NOLINT
    /**
     * @symbol ?getPermissions\@ScriptPackConfiguration\@\@QEBAAEBVScriptPackPermissions\@\@XZ
     */
    MCAPI class ScriptPackPermissions const& getPermissions() const; // NOLINT
    /**
     * @symbol
     * ?getSecrets\@ScriptPackConfiguration\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        std::string,
        std::string,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, std::string>>> const&
    getSecrets() const; // NOLINT
    /**
     * @symbol
     * ?getVariables\@ScriptPackConfiguration\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        std::string,
        class Json::Value,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, class Json::Value>>> const&
    getVariables() const; // NOLINT
    /**
     * @symbol ??4ScriptPackConfiguration\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ScriptPackConfiguration& operator=(class ScriptPackConfiguration&&); // NOLINT
    /**
     * @symbol ??1ScriptPackConfiguration\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPackConfiguration(); // NOLINT
};
