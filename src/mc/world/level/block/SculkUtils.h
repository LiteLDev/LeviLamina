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
MCNAPI bool canSpreadIntoBlock(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos);

MCNAPI ::std::set<::Block const*> const generateSculkReplaceableBlocks();

MCNAPI ::std::set<::Block const*> const generateSculkReplaceableBlocksWorldgen();

MCNAPI void
requestChargeEffects(::IBlockWorldGenAPI&, ::BlockSource* region, ::BlockPos const& pos, int charge, int facingData);
// NOLINTEND

} // namespace SculkUtils
