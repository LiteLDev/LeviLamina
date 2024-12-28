#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/MoonPhases.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class IBlockSource;
class ILevel;
class LevelSoundManager;
class Player;
// clang-format on

namespace LevelUtils {
// functions
// NOLINTBEGIN
MCAPI bool extinguishFire(
    ::IBlockSource&      region,
    ::BlockPos const&    pos,
    uchar                face,
    ::Actor*             source,
    ::LevelSoundManager& levelSoundManager,
    ::Player*            primaryPlayer
);

MCAPI int getDay(int time);

MCAPI ::MoonPhases getMoonPhase(::ILevel const& level);

MCAPI int getTimeOfDay(int time);

MCAPI int projectToTimeOfDay(int currentTime, int targetTime);
// NOLINTEND

} // namespace LevelUtils
