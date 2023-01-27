/**
 * @file  BaseGameVersioning.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BaseGameVersioning.
 *
 */
namespace BaseGameVersioning {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -150874337
     * @symbol  ?PATCH_UPGRADE_VERSION\@BaseGameVersioning\@\@3VBaseGameVersion\@\@B
     */
    MCAPI extern class BaseGameVersion const PATCH_UPGRADE_VERSION;
    /**
     * @hash   2038083595
     * @symbol  ?REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT\@BaseGameVersioning\@\@3VBaseGameVersion\@\@B
     */
    MCAPI extern class BaseGameVersion const REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT;
    /**
     * @hash   -2070810529
     * @symbol  ?getAvailableBehaviorPackBaseGameVersions\@BaseGameVersioning\@\@YAAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BaseGameVersion> const & getAvailableBehaviorPackBaseGameVersions();
    /**
     * @hash   946935543
     * @symbol  ?getAvailableResourcePackBaseGameVersions\@BaseGameVersioning\@\@YAAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BaseGameVersion> const & getAvailableResourcePackBaseGameVersions();
    /**
     * @hash   -2097859951
     * @symbol  ?upgradeBaseGameVersionFromWorldTemplate\@BaseGameVersioning\@\@YA_NAEBV?$not_null\@V?$NonOwnerPointer\@$$CBVWorldTemplateManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVLevelData\@\@\@Z
     */
    MCAPI bool upgradeBaseGameVersionFromWorldTemplate(class gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const &, class LevelData &);

};