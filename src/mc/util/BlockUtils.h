#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class BlockPos;
// clang-format on

namespace BlockUtils {
// functions
// NOLINTBEGIN
MCAPI bool allowsNetherVegetation(::BlockLegacy const& block);

MCAPI float getLiquidBlockHeight(::Block const& block, ::BlockPos const& blockPos);

MCAPI bool isDownwardFlowingLiquid(::Block const& block);

MCAPI bool isFullFlowingLiquid(::Block const& block);

MCAPI bool isLiquidSource(::Block const& block);
// NOLINTEND

} // namespace BlockUtils
