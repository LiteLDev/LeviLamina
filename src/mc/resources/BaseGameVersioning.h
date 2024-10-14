#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

namespace BaseGameVersioning {
// NOLINTBEGIN
MCAPI std::vector<class BaseGameVersion> const& getAvailableChemistryBehaviorPackGameVersions();

MCAPI std::vector<class BaseGameVersion> const& getAvailableChemistryResourcePackGameVersions();

MCAPI std::vector<class BaseGameVersion> const& getAvailableVanillaBehaviorPackGameVersions();

MCAPI std::vector<class BaseGameVersion> const& getAvailableVanillaResourcePackGameVersions();

MCAPI bool upgradeBaseGameVersionFromWorldTemplate(
    Bedrock::NotNullNonOwnerPtr<class WorldTemplateManager const> const& worldTemplateManager,
    class LevelData&                                                     levelData
);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI class BaseGameVersion const& PATCH_UPGRADE_VERSION();

MCAPI class BaseGameVersion const& REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT();
// NOLINTEND

}; // namespace BaseGameVersioning
