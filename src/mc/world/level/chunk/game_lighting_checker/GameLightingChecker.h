#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace GameLightingChecker { struct CheckAreaForLightingResults; }
// clang-format on

namespace GameLightingChecker {
// functions
// NOLINTBEGIN
MCAPI void checkAreaForLighting(
    ::BlockSource&                                      region,
    ::BlockPos const&                                   min,
    ::BlockPos const&                                   max,
    ::GameLightingChecker::CheckAreaForLightingResults& results
);
// NOLINTEND

} // namespace GameLightingChecker
