#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LevelChunk;
struct Brightness;
// clang-format on

namespace WeatherHelpers {
// functions
// NOLINTBEGIN
MCAPI bool
couldHaveFrozen(float temperature, ::Block const& block, ::Brightness const& blockBrightness, bool blockAboveIsAir);

MCAPI ::BlockPos const getTopRainBlockPos(::LevelChunk* chunk, ::BlockPos const& pos);

#ifdef LL_PLAT_C
MCAPI ::BlockPos const getTopSnowBlockPos(::BlockSource& region, ::BlockPos const& pos);
#endif

MCAPI bool shouldFreeze(::BlockSource& region, ::BlockPos const& pos, bool checkNeighbors);

MCAPI bool shouldSnow(::BlockSource& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace WeatherHelpers
