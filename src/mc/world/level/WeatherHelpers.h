#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
// clang-format on

namespace WeatherHelpers {
// functions
// NOLINTBEGIN
MCAPI ::BlockPos const getTopRainBlockPos(::LevelChunk* chunk, ::BlockPos const& pos);

MCAPI bool shouldFreeze(::BlockSource& region, ::BlockPos const& pos, bool checkNeighbors);

MCAPI bool shouldSnow(::BlockSource& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace WeatherHelpers
