/**
 * @file  ResourcePackPaths.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ResourcePackPaths.
 *
 */
namespace ResourcePackPaths {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1273367665
     * @symbol ?BEHAVIOR_PACK_PATH@ResourcePackPaths@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const BEHAVIOR_PACK_PATH;
    /**
     * @hash   -1615342289
     * @symbol ?DEVELOPMENT_BEHAVIOR_PACKS_PATH@ResourcePackPaths@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DEVELOPMENT_BEHAVIOR_PACKS_PATH;
    /**
     * @hash   32529807
     * @symbol ?DEVELOPMENT_RESOURCE_PACKS_PATH@ResourcePackPaths@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DEVELOPMENT_RESOURCE_PACKS_PATH;
    /**
     * @hash   -206445201
     * @symbol ?DEVELOPMENT_SKIN_PACKS_PATH@ResourcePackPaths@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DEVELOPMENT_SKIN_PACKS_PATH;
    /**
     * @hash   -910517614
     * @symbol ?GLOBAL_RESOURCE_PACKS_FILENAME@ResourcePackPaths@@3V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const GLOBAL_RESOURCE_PACKS_FILENAME;
    /**
     * @hash   1662774684
     * @symbol ?KNOWN_INVALID_PACKS_FILE_NAME@ResourcePackPaths@@3V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const KNOWN_INVALID_PACKS_FILE_NAME;
    /**
     * @hash   -1186356474
     * @symbol ?KNOWN_VALID_PACKS_FILE_NAME@ResourcePackPaths@@3V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const KNOWN_VALID_PACKS_FILE_NAME;
    /**
     * @hash   57319503
     * @symbol ?RESOURCE_PACKS_PATH@ResourcePackPaths@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const RESOURCE_PACKS_PATH;
    /**
     * @hash   -2134931281
     * @symbol ?SKIN_PACKS_PATH@ResourcePackPaths@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const SKIN_PACKS_PATH;
    /**
     * @hash   -1098237937
     * @symbol ?TREATMENT_PACK_PATH@ResourcePackPaths@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const TREATMENT_PACK_PATH;
    /**
     * @hash   530055130
     * @symbol ?getCachedBehaviorPacksPath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCachedBehaviorPacksPath();
    /**
     * @hash   2077743282
     * @symbol ?getCachedResourcePacksPath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCachedResourcePacksPath();
    /**
     * @hash   587339762
     * @symbol ?getPremiumBehaviorPackPath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumBehaviorPackPath();
    /**
     * @hash   -258420466
     * @symbol ?getPremiumPackPath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumPackPath();
    /**
     * @hash   360459690
     * @symbol ?getPremiumResourcePackPath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumResourcePackPath();
    /**
     * @hash   -314151726
     * @symbol ?getPremiumWorldTemplatePath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumWorldTemplatePath();
    /**
     * @hash   1977924018
     * @symbol ?getTemporaryPremiumBehaviorPacksPath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumBehaviorPacksPath();
    /**
     * @hash   -769355126
     * @symbol ?getTemporaryPremiumResourcePacksPath@ResourcePackPaths@@YA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumResourcePacksPath();

};