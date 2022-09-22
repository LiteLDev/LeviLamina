/**
 * @file  ScriptPackConfiguration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1000591517
     * @symbol ??0ScriptPackConfiguration@@QEAA@$$QEAV0@@Z
     */
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration &&);
    /**
     * @hash   633150206
     * @symbol ??0ScriptPackConfiguration@@QEAA@XZ
     */
    MCAPI ScriptPackConfiguration();
    /**
     * @hash   805758769
     * @symbol ??0ScriptPackConfiguration@@QEAA@AEBV0@@Z
     */
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration const &);
    /**
     * @hash   -102989662
     * @symbol ?getPermissions@ScriptPackConfiguration@@QEAAAEAVScriptPackPermissions@@XZ
     */
    MCAPI class ScriptPackPermissions & getPermissions();
    /**
     * @hash   186760796
     * @symbol ?getPermissions@ScriptPackConfiguration@@QEBAAEBVScriptPackPermissions@@XZ
     */
    MCAPI class ScriptPackPermissions const & getPermissions() const;
    /**
     * @hash   -1232898590
     * @symbol ?getSecrets@ScriptPackConfiguration@@QEAAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> & getSecrets();
    /**
     * @hash   -1819889376
     * @symbol ?getSecrets@ScriptPackConfiguration@@QEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const & getSecrets() const;
    /**
     * @hash   386991058
     * @symbol ?getVariables@ScriptPackConfiguration@@QEAAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, class Json::Value, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class Json::Value>>> & getVariables();
    /**
     * @hash   -880093168
     * @symbol ?getVariables@ScriptPackConfiguration@@QEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, class Json::Value, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class Json::Value>>> const & getVariables() const;
    /**
     * @hash   -1603790232
     * @symbol ??4ScriptPackConfiguration@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ScriptPackConfiguration & operator=(class ScriptPackConfiguration &&);
    /**
     * @hash   1175327694
     * @symbol ??1ScriptPackConfiguration@@QEAA@XZ
     */
    MCAPI ~ScriptPackConfiguration();

};