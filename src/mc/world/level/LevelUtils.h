#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MoonPhases.h"

namespace LevelUtils {
// NOLINTBEGIN
MCAPI bool
extinguishFire(class IBlockSource&, class BlockPos const&, uchar, class Actor*, class LevelSoundManager&, class Player*);

MCAPI int getDay(int);

MCAPI ::MoonPhases getMoonPhase(class ILevel const&);

MCAPI int getTimeOfDay(int);

MCAPI int projectToTimeOfDay(int currentTime, int targetTime);
// NOLINTEND

}; // namespace LevelUtils
