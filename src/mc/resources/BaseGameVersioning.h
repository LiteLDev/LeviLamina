#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { template<typename T0> class NonOwnerPointer; }
// clang-format on

namespace BaseGameVersioning {
/**
 * @symbol ?PATCH_UPGRADE_VERSION\@BaseGameVersioning\@\@3VBaseGameVersion\@\@B
 */
MCAPI extern class BaseGameVersion const PATCH_UPGRADE_VERSION;
/**
 * @symbol ?REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT\@BaseGameVersioning\@\@3VBaseGameVersion\@\@B
 */
MCAPI extern class BaseGameVersion const REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT;
/**
 * @symbol
 * ?getAvailableBehaviorPackBaseGameVersions\@BaseGameVersioning\@\@YAAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@XZ
 */
MCAPI std::vector<class BaseGameVersion> const& getAvailableBehaviorPackBaseGameVersions();
/**
 * @symbol
 * ?getAvailableResourcePackBaseGameVersions\@BaseGameVersioning\@\@YAAEBV?$vector\@VBaseGameVersion\@\@V?$allocator\@VBaseGameVersion\@\@\@std\@\@\@std\@\@XZ
 */
MCAPI std::vector<class BaseGameVersion> const& getAvailableResourcePackBaseGameVersions();
/**
 * @symbol
 * ?upgradeBaseGameVersionFromWorldTemplate\@BaseGameVersioning\@\@YA_NAEBV?$not_null\@V?$NonOwnerPointer\@$$CBVWorldTemplateManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVLevelData\@\@\@Z
 */
MCAPI bool
upgradeBaseGameVersionFromWorldTemplate(class gsl::not_null<class Bedrock::NonOwnerPointer<class WorldTemplateManager const>> const&, class LevelData&);

}; // namespace BaseGameVersioning
