#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
struct CopperBehavior;
// clang-format on

namespace CopperBlockUtil {
// functions
// NOLINTBEGIN
MCNAPI void onLightningHit(::BlockSource& region, ::BlockPos const& pos, ::CopperBehavior const& behavior);

MCNAPI void tryIncrementAge(
    ::BlockSource&          region,
    ::BlockPos const&       pos,
    float                   dailyChance,
    float                   oxidizeChance,
    ::CopperBehavior const& behavior
);
// NOLINTEND

} // namespace CopperBlockUtil
