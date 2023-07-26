/**
 * @file  ScriptPackConfiguration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPackConfiguration.
 *
 */
class ScriptPackConfiguration {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPACKCONFIGURATION
public:
    class ScriptPackConfiguration& operator=(class ScriptPackConfiguration const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ScriptPackConfiguration\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration &&);
    /**
     * @symbol  ??0ScriptPackConfiguration\@\@QEAA\@XZ
     */
    MCAPI ScriptPackConfiguration();
    /**
     * @symbol  ??0ScriptPackConfiguration\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration const &);
    /**
     * @symbol  ?getPermissions\@ScriptPackConfiguration\@\@QEAAAEAVScriptPackPermissions\@\@XZ
     */
    MCAPI class ScriptPackPermissions & getPermissions();
    /**
     * @symbol  ?getPermissions\@ScriptPackConfiguration\@\@QEBAAEBVScriptPackPermissions\@\@XZ
     */
    MCAPI class ScriptPackPermissions const & getPermissions() const;
    /**
     * @symbol  ?getSecrets\@ScriptPackConfiguration\@\@QEAAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> & getSecrets();
    /**
     * @symbol  ?getSecrets\@ScriptPackConfiguration\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const & getSecrets() const;
    /**
     * @symbol  ?getVariables\@ScriptPackConfiguration\@\@QEAAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, class Json::Value, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class Json::Value>>> & getVariables();
    /**
     * @symbol  ?getVariables\@ScriptPackConfiguration\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, class Json::Value, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class Json::Value>>> const & getVariables() const;
    /**
     * @symbol  ??4ScriptPackConfiguration\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ScriptPackConfiguration & operator=(class ScriptPackConfiguration &&);
    /**
     * @symbol  ??1ScriptPackConfiguration\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPackConfiguration();

};