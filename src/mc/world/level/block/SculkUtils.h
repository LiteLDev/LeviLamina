#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

namespace SculkUtils {
// functions
// NOLINTBEGIN
MCAPI bool canSpreadIntoBlock(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos);

MCAPI ::std::set<::Block const*> const generateSculkReplaceableBlocks();

MCAPI ::std::set<::Block const*> const generateSculkReplaceableBlocksWorldgen();

MCAPI bool isSculkOrSculkVein(::Block const& block);
// NOLINTEND

} // namespace SculkUtils
