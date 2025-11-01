#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
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

MCAPI bool canPlacePool(::IBlockWorldGenAPI& target, ::BlockPos const& pos);

MCAPI ::std::optional<::DripstoneUtils::PointedDripstoneBasePos>
getPointedDripstoneBasePos(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random);

MCAPI bool isCircleMostlyEmbeddedInStone(::IBlockWorldGenAPI& target, ::BlockPos const& center, int xzRadius);

MCAPI bool replaceableByDripstone(::BlockType const& block);
// NOLINTEND

} // namespace DripstoneUtils
