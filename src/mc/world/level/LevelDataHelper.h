#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"
#include "mc/enums/GameType.h"

namespace LevelDataHelper {
// NOLINTBEGIN
// symbol: ?setCommandsEnabled@LevelDataHelper@@YAXAEAVLevelData@@_NPEAVIMinecraftEventing@@PEAVPlayer@@@Z
MCAPI void setCommandsEnabled(class LevelData&, bool, class IMinecraftEventing*, class Player*);

// symbol: ?setDefaultGameType@LevelDataHelper@@YAXAEAVLevelData@@W4GameType@@PEAVIMinecraftEventing@@@Z
MCAPI void setDefaultGameType(class LevelData&, ::GameType, class IMinecraftEventing*);

// symbol: ?setDifficulty@LevelDataHelper@@YAXAEAVLevelData@@W4Difficulty@@PEAVIMinecraftEventing@@PEAVILevel@@@Z
MCAPI void setDifficulty(class LevelData&, ::Difficulty, class IMinecraftEventing*, class ILevel*);
// NOLINTEND

}; // namespace LevelDataHelper
