#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class LevelData;
class WorldTemplateManager;
// clang-format on

namespace BaseGameVersioning {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::BaseGameVersion> const& getAvailableChemistryBehaviorPackGameVersions();

MCAPI ::std::vector<::BaseGameVersion> const& getAvailableChemistryResourcePackGameVersions();

MCAPI ::std::vector<::BaseGameVersion> const& getAvailableVanillaBehaviorPackGameVersions();

MCAPI ::std::vector<::BaseGameVersion> const& getAvailableVanillaResourcePackGameVersions();

MCAPI bool upgradeBaseGameVersionFromWorldTemplate(
    ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager const> const& worldTemplateManager,
    ::LevelData&                                                       levelData
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::BaseGameVersion const& PATCH_UPGRADE_VERSION();

MCAPI ::BaseGameVersion const& REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT();
// NOLINTEND

} // namespace BaseGameVersioning
