#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WeatherHelpers {
// NOLINTBEGIN
MCAPI class BlockPos const getTopRainBlockPos(class LevelChunk* chunk, class BlockPos const& pos);

MCAPI bool shouldFreeze(class BlockSource& region, class BlockPos const& pos, bool checkNeighbors);

MCAPI bool shouldSnow(class BlockSource& region, class BlockPos const& pos);
// NOLINTEND

}; // namespace WeatherHelpers
