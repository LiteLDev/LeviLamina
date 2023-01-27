/**
 * @file  ResourcePackPaths.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Core.hpp"

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
     * @hash   -1304807727
     * @symbol  ?BEHAVIOR_PACK_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BEHAVIOR_PACK_PATH;
    /**
     * @hash   101449615
     * @symbol  ?DEVELOPMENT_BEHAVIOR_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DEVELOPMENT_BEHAVIOR_PACKS_PATH;
    /**
     * @hash   1749321711
     * @symbol  ?DEVELOPMENT_RESOURCE_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DEVELOPMENT_RESOURCE_PACKS_PATH;
    /**
     * @hash   1510346703
     * @symbol  ?DEVELOPMENT_SKIN_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DEVELOPMENT_SKIN_PACKS_PATH;
    /**
     * @hash   806274290
     * @symbol  ?GLOBAL_RESOURCE_PACKS_FILENAME\@ResourcePackPaths\@\@3V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const GLOBAL_RESOURCE_PACKS_FILENAME;
    /**
     * @hash   -915400708
     * @symbol  ?KNOWN_INVALID_PACKS_FILE_NAME\@ResourcePackPaths\@\@3V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const KNOWN_INVALID_PACKS_FILE_NAME;
    /**
     * @hash   530435430
     * @symbol  ?KNOWN_VALID_PACKS_FILE_NAME\@ResourcePackPaths\@\@3V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const KNOWN_VALID_PACKS_FILE_NAME;
    /**
     * @hash   1774111407
     * @symbol  ?RESOURCE_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RESOURCE_PACKS_PATH;
    /**
     * @hash   -418139377
     * @symbol  ?SKIN_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const SKIN_PACKS_PATH;
    /**
     * @hash   618553967
     * @symbol  ?TREATMENT_PACK_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const TREATMENT_PACK_PATH;
    /**
     * @hash   -1111614230
     * @symbol  ?getCachedBehaviorPacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCachedBehaviorPacksPath();
    /**
     * @hash   436058546
     * @symbol  ?getCachedResourcePacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCachedResourcePacksPath();
    /**
     * @hash   -1054360350
     * @symbol  ?getPremiumBehaviorPackPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumBehaviorPackPath();
    /**
     * @hash   -1900120578
     * @symbol  ?getPremiumPackPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumPackPath();
    /**
     * @hash   -1281240422
     * @symbol  ?getPremiumResourcePackPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumResourcePackPath();
    /**
     * @hash   -1955851838
     * @symbol  ?getPremiumWorldTemplatePath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumWorldTemplatePath();
    /**
     * @hash   336223906
     * @symbol  ?getTemporaryPremiumBehaviorPacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumBehaviorPacksPath();
    /**
     * @hash   1883896682
     * @symbol  ?getTemporaryPremiumResourcePacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumResourcePacksPath();

};