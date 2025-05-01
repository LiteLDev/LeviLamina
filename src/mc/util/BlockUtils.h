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
MCNAPI bool allowsNetherVegetation(::BlockLegacy const& block);

MCNAPI float getLiquidBlockHeight(::Block const& block, ::BlockPos const& blockPos);

MCNAPI bool isDownwardFlowingLiquid(::Block const& block);

MCNAPI bool isFullFlowingLiquid(::Block const& block);

MCNAPI bool isLiquidSource(::Block const& block);
// NOLINTEND

} // namespace BlockUtils
