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
MCAPI bool shouldFreeze(::BlockSource& region, ::BlockPos const& pos, bool checkNeighbors);
// NOLINTEND

} // namespace WeatherHelpers
