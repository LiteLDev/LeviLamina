/**
 * @file  BaseGameVersioning.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

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
     * @symbol  ?PATCH_UPGRADE_VERSION\@BaseGameVersioning\@\@3VBaseGameVersion\@\@B
     */
    MCAPI extern class BaseGameVersion const PATCH_UPGRADE_VERSION;
    /**
     * @symbol  ?REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT\@BaseGameVersioning\@\@3VBaseGameVersion\@\@B
     */
    MCAPI extern class BaseGameVersion const REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT;
    /**
     * @symbol  ?getAvailableBehaviorPackBaseGameVersions\@BaseGameVersioning\@\@YAAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BaseGameVersion> const & getAvailableBehaviorPackBaseGameVersions();
    /**
     * @symbol  ?getAvailableResourcePackBaseGameVersions\@BaseGameVersioning\@\@YAAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BaseGameVersion> const & getAvailableResourcePackBaseGameVersions();
    /**
     * @symbol  ?upgradeBaseGameVersionFromWorldTemplate\@BaseGameVersioning\@\@YA_NAEBV?$not_null\@V?$NonOwnerPointer\@$$CBVWorldTemplateManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVLevelData\@\@\@Z
     */
    MCAPI bool upgradeBaseGameVersionFromWorldTemplate(class gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const &, class LevelData &);

};