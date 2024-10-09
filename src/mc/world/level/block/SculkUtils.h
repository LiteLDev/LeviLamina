#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkUtils {
// NOLINTBEGIN
MCAPI bool canSpreadIntoBlock(class IBlockWorldGenAPI& target, class Block const& block, class BlockPos const& pos);

MCAPI std::set<class Block const*> const generateSculkReplaceableBlocks();

MCAPI std::set<class Block const*> const generateSculkReplaceableBlocksWorldgen();

MCAPI bool isSculkOrSculkVein(class Block const& block);
// NOLINTEND

}; // namespace SculkUtils
