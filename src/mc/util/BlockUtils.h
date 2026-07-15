#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
// clang-format on

namespace BlockUtils {
// functions
// NOLINTBEGIN
MCAPI bool canSee(::Actor const& actor, ::BlockPos const& pos, ::ShapeType obstructionType);

MCAPI float getLiquidBlockHeight(::Block const& block, ::BlockPos const& blockPos);

MCAPI bool isBeehiveInducingBlock(::Block const& block);

MCAPI bool isDownwardFlowingLiquid(::Block const& block);

MCAPI bool isFullFlowingLiquid(::Block const& block);

MCAPI bool isLiquidSource(::Block const& block);
// NOLINTEND

} // namespace BlockUtils
