#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Difficulty.h"
#include "mc/world/level/GameType.h"

namespace LevelDataHelper {
// NOLINTBEGIN
MCAPI void setCommandsEnabled(
    class LevelData&          levelData,
    bool                      commandsEnabled,
    class IMinecraftEventing* eventing,
    class Player*             player
);

MCAPI void setDefaultGameType(class LevelData& levelData, ::GameType gameType, class IMinecraftEventing* eventing);

MCAPI void setDifficulty(
    class LevelData&          levelData,
    ::Difficulty              difficulty,
    class IMinecraftEventing* eventing,
    class ILevel*             level
);
// NOLINTEND

}; // namespace LevelDataHelper
