#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class IMinecraftEventing;
class LevelData;
class LevelSettings;
// clang-format on

namespace LevelDataHelper {
// functions
// NOLINTBEGIN
MCAPI ::Bedrock::UniqueOwnerPointer<::LevelData> createLevelDataFromLevelSettings(::LevelSettings const& levelSettings, ::std::string const& levelName);

MCAPI void setDifficulty(::LevelData& levelData, ::SharedTypes::Legacy::Difficulty difficulty, ::IMinecraftEventing* eventing, ::ILevel* level);
// NOLINTEND

}
