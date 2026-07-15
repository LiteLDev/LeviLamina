#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class Random;
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

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocks();

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocksWorldgen();
// NOLINTEND

} // namespace SculkUtils
