#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class IBlockSource;
class LevelSoundManager;
class Player;
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace LevelUtils {
// functions
// NOLINTBEGIN
MCNAPI_C ::Core::Result createNewLevelDirectory(::Core::Path const& pathToLevel);

MCNAPI bool extinguishFire(
    ::IBlockSource&      region,
    ::BlockPos const&    pos,
    uchar                face,
    ::Actor*             source,
    ::LevelSoundManager& levelSoundManager,
    ::Player*            primaryPlayer
);
// NOLINTEND

} // namespace LevelUtils
