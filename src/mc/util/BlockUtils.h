#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockType;
class IRandom;
struct IntRange;
// clang-format on

namespace BlockUtils {
// functions
// NOLINTBEGIN
MCAPI bool allowsNetherVegetation(::BlockType const& block);

MCAPI bool canSee(::Actor const& actor, ::BlockPos const& pos, ::ShapeType obstructionType);

MCAPI float getLiquidBlockHeight(::Block const& block, ::BlockPos const& blockPos);

MCAPI float getParticleCountFromIntensity(float intensity);

MCAPI ::BlockPos getRandomPos(::IRandom& random, ::BlockPos pos, ::IntRange const& xzRange, ::IntRange const& yRange);

MCAPI bool isBeehiveBlock(::BlockType const& block);

MCAPI bool isBeehiveInducingBlock(::Block const& block);

MCAPI bool isDownwardFlowingLiquid(::Block const& block);

MCAPI bool isFullFlowingLiquid(::Block const& block);

MCAPI bool isLiquidSource(::Block const& block);

MCAPI bool isWaterSource(::Block const& block);
// NOLINTEND

} // namespace BlockUtils
