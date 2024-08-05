#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DripstoneThickness.h"

// auto generated forward declare list
// clang-format off
namespace DripstoneUtils { struct PointedDripstoneBasePos; }
namespace ValueProviders { struct UniformFloat; }
// clang-format on

namespace DripstoneUtils {
// NOLINTBEGIN
MCAPI void
buildBaseToTipColumn(class IBlockWorldGenAPI& target, class BlockPos const& basePos, uchar direction, int length, bool);

MCAPI bool canBeAdjacentToWater(class IBlockWorldGenAPI& target, class BlockPos const& pos);

MCAPI bool canPlacePool(class IBlockWorldGenAPI& target, class BlockPos const& pos);

MCAPI float getDripstoneHeight(float, float, float scale, float);

MCAPI class Block const& getPlacementBlock(uchar direction, ::DripstoneThickness const& thickness);

MCAPI std::optional<struct DripstoneUtils::PointedDripstoneBasePos>
      getPointedDripstoneBasePos(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random);

MCAPI bool isCircleMostlyEmbeddedInStone(class IBlockWorldGenAPI& target, class BlockPos const& center, int);

MCAPI bool isDripstoneBaseOrLava(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

MCAPI bool isEmptyOrWater(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

MCAPI bool isEmptyOrWaterOrLava(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

MCAPI bool isLava(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

MCAPI bool placeDripstoneBlockIfPossible(class IBlockWorldGenAPI& target, class BlockPos const& pos);

MCAPI bool replaceableByDripstone(class BlockLegacy const& block);
// NOLINTEND

}; // namespace DripstoneUtils
