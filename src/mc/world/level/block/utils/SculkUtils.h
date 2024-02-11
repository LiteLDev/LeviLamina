#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkUtils {
// NOLINTBEGIN
// symbol: ?canSpreadIntoBlock@SculkUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@@Z
MCAPI bool canSpreadIntoBlock(class IBlockWorldGenAPI& target, class Block const& block, class BlockPos const& pos);

// symbol:
// ?generateSculkReplaceableBlocks@SculkUtils@@YA?BV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
MCAPI std::set<class Block const*> const generateSculkReplaceableBlocks();

// symbol:
// ?generateSculkReplaceableBlocksWorldgen@SculkUtils@@YA?BV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
MCAPI std::set<class Block const*> const generateSculkReplaceableBlocksWorldgen();

// symbol: ?isPosInTickingRange@SculkUtils@@YA_NAEAVBlockSource@@AEBVBlockPos@@@Z
MCAPI bool isPosInTickingRange(class BlockSource& region, class BlockPos const& pos);

// symbol: ?isSculk@SculkUtils@@YA_NAEBVBlock@@@Z
MCAPI bool isSculk(class Block const& block);

// symbol: ?isSculkOrSculkVein@SculkUtils@@YA_NAEBVBlock@@@Z
MCAPI bool isSculkOrSculkVein(class Block const& block);

// symbol:
// ?isSculkReplaceable@SculkUtils@@YA_NAEBVBlock@@AEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@@Z
MCAPI bool isSculkReplaceable(class Block const& block, std::set<class Block const*> const&);

// symbol: ?isSculkVein@SculkUtils@@YA_NAEBVBlock@@@Z
MCAPI bool isSculkVein(class Block const& block);

// symbol:
// ?isSculkVeinWithSubstrateAccess@SculkUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@AEAVSculkSpreader@@@Z
MCAPI bool
isSculkVeinWithSubstrateAccess(class IBlockWorldGenAPI& target, class Block const& block, class BlockPos const& pos, class SculkSpreader&);
// NOLINTEND

}; // namespace SculkUtils
