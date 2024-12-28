#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/Difficulty.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class IMinecraftEventing;
class LevelData;
class LevelSettings;
class Player;
// clang-format on

namespace LevelDataHelper {
// functions
// NOLINTBEGIN
MCAPI ::Bedrock::UniqueOwnerPointer<::LevelData>
createLevelDataFromLevelSettings(::LevelSettings const& levelSettings, ::std::string const& levelName);

MCAPI void
setCommandsEnabled(::LevelData& levelData, bool commandsEnabled, ::IMinecraftEventing* eventing, ::Player* player);

MCAPI void setDefaultGameType(::LevelData& levelData, ::GameType gameType, ::IMinecraftEventing* eventing);

MCAPI void
setDifficulty(::LevelData& levelData, ::Difficulty difficulty, ::IMinecraftEventing* eventing, ::ILevel* level);
// NOLINTEND

} // namespace LevelDataHelper
