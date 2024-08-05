#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GameLightingChecker { struct CheckAreaForLightingResults; }
// clang-format on

namespace GameLightingChecker {
// NOLINTBEGIN
MCAPI void checkAreaForLighting(
    class BlockSource&                                       region,
    class BlockPos const&                                    min,
    class BlockPos const&                                    max,
    struct GameLightingChecker::CheckAreaForLightingResults& results
);
// NOLINTEND

}; // namespace GameLightingChecker
