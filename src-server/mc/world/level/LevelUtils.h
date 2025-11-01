#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class IBlockSource;
class LevelSoundManager;
class Player;
// clang-format on

namespace LevelUtils {
// functions
// NOLINTBEGIN
MCNAPI bool extinguishFire(::IBlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source, ::LevelSoundManager& levelSoundManager, ::Player* primaryPlayer);
// NOLINTEND

}
