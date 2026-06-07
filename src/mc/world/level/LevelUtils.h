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
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace LevelUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::Core::Result createNewLevelDirectory(::Core::Path const& pathToLevel);
#endif

MCNAPI bool extinguishFire(
    ::IBlockSource&      region,
    ::BlockPos const&    pos,
    uchar                face,
    ::Actor*             source,
    ::LevelSoundManager& levelSoundManager,
    ::Player*            primaryPlayer
);

MCNAPI int getDay(int time);

MCNAPI ::MoonPhases getMoonPhase(::ILevel const& level);

MCNAPI int getTimeOfDay(int time);

MCNAPI int projectToTimeOfDay(int currentTime, int targetTime);
// NOLINTEND

} // namespace LevelUtils
