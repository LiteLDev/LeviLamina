#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class IBlockWorldGenAPI;
class Random;
// clang-format on

namespace SculkUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void addChargeEffects(::BlockSource& region, ::CompoundTag const& data, ::Random& random);

MCNAPI void
addChargeEffects(::BlockSource& region, ::BlockPos const& pos, int charge, int facingData, ::Random& random);

MCNAPI void addChargePopEffects(::BlockSource& region, ::CompoundTag const& data, ::Random& random);

MCNAPI void addChargePopEffects(::BlockSource& region, ::BlockPos const& pos, ::Random& random);
#endif

MCNAPI bool canSpreadIntoBlock(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos);

MCNAPI ::std::set<::Block const*> generateSculkReplaceableBlocks();

MCNAPI ::std::set<::Block const*> generateSculkReplaceableBlocksWorldgen();
// NOLINTEND

} // namespace SculkUtils
