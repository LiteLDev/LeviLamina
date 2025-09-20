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
MCNAPI void buildBaseToTipColumn(
    ::IBlockWorldGenAPI& target,
    ::BlockPos const&    basePos,
    uchar                direction,
    int                  length,
    bool                 mergeTips
);

MCNAPI bool canPlacePool(::IBlockWorldGenAPI& target, ::BlockPos const& pos);

MCNAPI ::std::optional<::DripstoneUtils::PointedDripstoneBasePos>
getPointedDripstoneBasePos(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random);

MCNAPI bool isCircleMostlyEmbeddedInStone(::IBlockWorldGenAPI& target, ::BlockPos const& center, int xzRadius);

MCNAPI bool replaceableByDripstone(::BlockType const& block);
// NOLINTEND

} // namespace DripstoneUtils
