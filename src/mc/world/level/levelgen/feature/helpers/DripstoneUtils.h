#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DripstoneThickness.h"

// auto generated forward declare list
// clang-format off
namespace DripstoneUtils { struct PointedDripstoneBasePos; }
// clang-format on

namespace DripstoneUtils {
// NOLINTBEGIN
// symbol: ?buildBaseToTipColumn@DripstoneUtils@@YAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@EH_N@Z
MCAPI void
buildBaseToTipColumn(class IBlockWorldGenAPI& target, class BlockPos const& basePos, uchar direction, int length, bool);

// symbol: ?canBeAdjacentToWater@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool canBeAdjacentToWater(class IBlockWorldGenAPI& target, class BlockPos const& pos);

// symbol: ?canPlacePool@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool canPlacePool(class IBlockWorldGenAPI& target, class BlockPos const& pos);

// symbol: ?getPlacementBlock@DripstoneUtils@@YAAEBVBlock@@EAEBW4DripstoneThickness@@@Z
MCAPI class Block const& getPlacementBlock(uchar direction, ::DripstoneThickness const& thickness);

// symbol:
// ?getPointedDripstoneBasePos@DripstoneUtils@@YA?AV?$optional@UPointedDripstoneBasePos@DripstoneUtils@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@@Z
MCAPI std::optional<struct DripstoneUtils::PointedDripstoneBasePos>
      getPointedDripstoneBasePos(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random);

// symbol: ?isDripstoneBaseOrLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool isDripstoneBaseOrLava(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

// symbol: ?isEmptyOrWater@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool isEmptyOrWater(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

// symbol: ?isEmptyOrWaterOrLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool isEmptyOrWaterOrLava(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

// symbol: ?isLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool isLava(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

// symbol: ?placeDripstoneBlockIfPossible@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool placeDripstoneBlockIfPossible(class IBlockWorldGenAPI& target, class BlockPos const& pos);

// symbol: ?replaceableByDripstone@DripstoneUtils@@YA_NAEBVBlockLegacy@@@Z
MCAPI bool replaceableByDripstone(class BlockLegacy const& block);
// NOLINTEND

}; // namespace DripstoneUtils
