#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockType;
// clang-format on

namespace BlockUtils {
// functions
// NOLINTBEGIN
MCAPI bool allowsNetherVegetation(::BlockType const& block);

MCAPI float getLiquidBlockHeight(::Block const& block, ::BlockPos const& blockPos);

MCAPI bool isFullFlowingLiquid(::Block const& block);

MCAPI bool isLiquidSource(::Block const& block);

MCAPI bool isWaterSource(::Block const& block);
// NOLINTEND

} // namespace BlockUtils
