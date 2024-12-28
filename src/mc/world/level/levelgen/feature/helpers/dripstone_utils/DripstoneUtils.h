#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/DripstoneThickness.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
namespace DripstoneUtils { struct PointedDripstoneBasePos; }
// clang-format on

namespace DripstoneUtils {
// functions
// NOLINTBEGIN
MCAPI void buildBaseToTipColumn(
    ::IBlockWorldGenAPI& target,
    ::BlockPos const&    basePos,
    uchar                direction,
    int                  length,
    bool                 mergeTips
);

MCAPI bool canBeAdjacentToWater(::IBlockWorldGenAPI& target, ::BlockPos const& pos);

MCAPI bool canPlacePool(::IBlockWorldGenAPI& target, ::BlockPos const& pos);

MCAPI float getDripstoneHeight(float xzDistanceFromCenter, float dripstoneRadius, float scale, float bluntness);

MCAPI ::Block const& getPlacementBlock(uchar direction, ::DripstoneThickness const& thickness);

MCAPI ::std::optional<::DripstoneUtils::PointedDripstoneBasePos>
getPointedDripstoneBasePos(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random);

MCAPI bool isCircleMostlyEmbeddedInStone(::IBlockWorldGenAPI& target, ::BlockPos const& center, int xzRadius);

MCAPI bool isDripstoneBaseOrLava(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool isEmptyOrWater(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool isEmptyOrWaterOrLava(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool isLava(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool placeDripstoneBlockIfPossible(::IBlockWorldGenAPI& target, ::BlockPos const& pos);

MCAPI bool replaceableByDripstone(::BlockLegacy const& block);
// NOLINTEND

} // namespace DripstoneUtils
