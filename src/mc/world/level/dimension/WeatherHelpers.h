#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WeatherHelpers {
// NOLINTBEGIN
// symbol: ?getTopRainBlockPos@WeatherHelpers@@YA?BVBlockPos@@PEAVLevelChunk@@AEBV2@@Z
MCAPI class BlockPos const getTopRainBlockPos(class LevelChunk* chunk, class BlockPos const& pos);

// symbol: ?shouldFreeze@WeatherHelpers@@YA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
MCAPI bool shouldFreeze(class BlockSource& region, class BlockPos const& pos, bool checkNeighbors);

// symbol: ?shouldSnow@WeatherHelpers@@YA_NAEAVBlockSource@@AEBVBlockPos@@@Z
MCAPI bool shouldSnow(class BlockSource& region, class BlockPos const& pos);
// NOLINTEND

}; // namespace WeatherHelpers
