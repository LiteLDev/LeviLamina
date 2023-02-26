/**
 * @file  ResourcePackPaths.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  ?BEHAVIOR_PACK_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BEHAVIOR_PACK_PATH;
    /**
     * @symbol  ?DEVELOPMENT_BEHAVIOR_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DEVELOPMENT_BEHAVIOR_PACKS_PATH;
    /**
     * @symbol  ?DEVELOPMENT_RESOURCE_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DEVELOPMENT_RESOURCE_PACKS_PATH;
    /**
     * @symbol  ?DEVELOPMENT_SKIN_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DEVELOPMENT_SKIN_PACKS_PATH;
    /**
     * @symbol  ?GLOBAL_RESOURCE_PACKS_FILENAME\@ResourcePackPaths\@\@3V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const GLOBAL_RESOURCE_PACKS_FILENAME;
    /**
     * @symbol  ?KNOWN_INVALID_PACKS_FILE_NAME\@ResourcePackPaths\@\@3V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const KNOWN_INVALID_PACKS_FILE_NAME;
    /**
     * @symbol  ?KNOWN_VALID_PACKS_FILE_NAME\@ResourcePackPaths\@\@3V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI extern class Core::PathBuffer<std::string> const KNOWN_VALID_PACKS_FILE_NAME;
    /**
     * @symbol  ?RESOURCE_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RESOURCE_PACKS_PATH;
    /**
     * @symbol  ?SKIN_PACKS_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const SKIN_PACKS_PATH;
    /**
     * @symbol  ?TREATMENT_PACK_PATH\@ResourcePackPaths\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const TREATMENT_PACK_PATH;
    /**
     * @symbol  ?getCachedBehaviorPacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCachedBehaviorPacksPath();
    /**
     * @symbol  ?getCachedResourcePacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getCachedResourcePacksPath();
    /**
     * @symbol  ?getPremiumBehaviorPackPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumBehaviorPackPath();
    /**
     * @symbol  ?getPremiumPackPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumPackPath();
    /**
     * @symbol  ?getPremiumResourcePackPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumResourcePackPath();
    /**
     * @symbol  ?getPremiumWorldTemplatePath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getPremiumWorldTemplatePath();
    /**
     * @symbol  ?getTemporaryPremiumBehaviorPacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumBehaviorPacksPath();
    /**
     * @symbol  ?getTemporaryPremiumResourcePacksPath\@ResourcePackPaths\@\@YA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumResourcePacksPath();

};