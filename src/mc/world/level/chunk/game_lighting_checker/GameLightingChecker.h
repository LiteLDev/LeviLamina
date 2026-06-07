#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
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

#ifdef LL_PLAT_C
MCAPI void sortErrorListByDistance(::GameLightingChecker::CheckAreaForLightingResults& results, ::Vec3 const& position);
#endif
// NOLINTEND

} // namespace GameLightingChecker
