#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"
#include "mc/enums/GameType.h"

namespace LevelDataHelper {
// NOLINTBEGIN
// symbol: ?setCommandsEnabled@LevelDataHelper@@YAXAEAVLevelData@@_NPEAVIMinecraftEventing@@PEAVPlayer@@@Z
MCAPI void setCommandsEnabled(
    class LevelData&          levelData,
    bool                      commandsEnabled,
    class IMinecraftEventing* eventing,
    class Player*             player
);

// symbol: ?setDefaultGameType@LevelDataHelper@@YAXAEAVLevelData@@W4GameType@@PEAVIMinecraftEventing@@@Z
MCAPI void setDefaultGameType(class LevelData& levelData, ::GameType gameType, class IMinecraftEventing* eventing);

// symbol: ?setDifficulty@LevelDataHelper@@YAXAEAVLevelData@@W4Difficulty@@PEAVIMinecraftEventing@@PEAVILevel@@@Z
MCAPI void setDifficulty(
    class LevelData&          levelData,
    ::Difficulty              difficulty,
    class IMinecraftEventing* eventing,
    class ILevel*             level
);
// NOLINTEND

}; // namespace LevelDataHelper
