#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
class Random;
// clang-format on

namespace SculkUtils {
// functions
// NOLINTBEGIN
MCAPI_C void
addChargeEffects(::BlockSource& region, ::BlockPos const& pos, int charge, int facingData, ::Random& random);

MCAPI_C void addChargePopEffects(::BlockSource& region, ::BlockPos const& pos, ::Random& random);

MCAPI bool canSpreadIntoBlock(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos);

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocks();

MCAPI ::std::set<::Block const*> generateSculkReplaceableBlocksWorldgen();

MCAPI void
requestChargeEffects(::IBlockWorldGenAPI&, ::BlockSource* region, ::BlockPos const& pos, int charge, int facingData);

MCAPI void requestChargePopEffects(::IBlockWorldGenAPI&, ::BlockSource* region, ::BlockPos const& pos);
// NOLINTEND

} // namespace SculkUtils
