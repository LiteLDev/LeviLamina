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
MCNAPI ::BlockPos const getTopSnowBlockPos(::BlockSource& region, ::BlockPos const& pos);
#endif

MCNAPI bool shouldFreeze(::BlockSource& region, ::BlockPos const& pos, bool checkNeighbors);

MCNAPI bool shouldSnow(::BlockSource& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace WeatherHelpers
