#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/MoonPhases.h"

namespace LevelUtils {
// NOLINTBEGIN
MCAPI bool extinguishFire(
    class IBlockSource&      region,
    class BlockPos const&    pos,
    uchar                    face,
    class Actor*             source,
    class LevelSoundManager& levelSoundManager,
    class Player*            primaryPlayer
);

MCAPI int getDay(int time);

MCAPI ::MoonPhases getMoonPhase(class ILevel const& level);

MCAPI int getTimeOfDay(int time);

MCAPI int projectToTimeOfDay(int currentTime, int targetTime);
// NOLINTEND

}; // namespace LevelUtils
