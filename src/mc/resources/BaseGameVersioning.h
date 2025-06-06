#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class IWorldTemplateManager;
class LevelData;
// clang-format on

namespace BaseGameVersioning {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::BaseGameVersion> const& getAvailableChemistryBehaviorPackGameVersions();

MCNAPI ::std::vector<::BaseGameVersion> const& getAvailableChemistryResourcePackGameVersions();

MCNAPI ::std::vector<::BaseGameVersion> const& getAvailableVanillaBehaviorPackGameVersions();

MCNAPI ::std::vector<::BaseGameVersion> const& getAvailableVanillaResourcePackGameVersions();

MCNAPI bool upgradeBaseGameVersionFromWorldTemplate(
    ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const& worldTemplateManager,
    ::LevelData&                                                        levelData
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::BaseGameVersion const& PATCH_UPGRADE_VERSION();

MCNAPI ::BaseGameVersion const& REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT();
// NOLINTEND

} // namespace BaseGameVersioning
