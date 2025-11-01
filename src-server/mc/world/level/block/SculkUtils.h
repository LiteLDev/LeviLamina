#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
// clang-format on

namespace SculkUtils {
// functions
// NOLINTBEGIN
MCAPI bool canSpreadIntoBlock(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos);

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocks();

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocksWorldgen();

MCAPI void
requestChargeEffects(::IBlockWorldGenAPI&, ::BlockSource* region, ::BlockPos const& pos, int charge, int facingData);
// NOLINTEND

} // namespace SculkUtils
