#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

namespace WeatherHelpers {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::BlockPos const getTopSnowBlockPos(::BlockSource& region, ::BlockPos const& pos);
#endif

MCAPI bool shouldFreeze(::BlockSource& region, ::BlockPos const& pos, bool checkNeighbors);
// NOLINTEND

} // namespace WeatherHelpers
