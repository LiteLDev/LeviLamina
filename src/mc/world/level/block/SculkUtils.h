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
class SculkSpreader;
// clang-format on

namespace SculkUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void addChargeEffects(::BlockSource& region, ::CompoundTag const& data, ::Random& random);

MCAPI void addChargeEffects(::BlockSource& region, ::BlockPos const& pos, int charge, int facingData, ::Random& random);

MCAPI void addChargePopEffects(::BlockSource& region, ::CompoundTag const& data, ::Random& random);

MCAPI void addChargePopEffects(::BlockSource& region, ::BlockPos const& pos, ::Random& random);
#endif

MCAPI bool canSpreadIntoBlock(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos);

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocks();

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocksWorldgen();

MCAPI bool isSculkOrSculkVein(::Block const& block);

MCAPI bool isSculkVeinWithSubstrateAccess(
    ::IBlockWorldGenAPI& target,
    ::Block const&       block,
    ::BlockPos const&    pos,
    ::SculkSpreader&     spreader
);

MCAPI void
requestChargeEffects(::IBlockWorldGenAPI& region, ::BlockSource* pos, ::BlockPos const& charge, int facingData, int);

MCAPI void requestChargePopEffects(::IBlockWorldGenAPI& region, ::BlockSource* pos, ::BlockPos const&);
// NOLINTEND

} // namespace SculkUtils
