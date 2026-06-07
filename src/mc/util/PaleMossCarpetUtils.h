#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/PaleMossCarpetSide.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

namespace PaleMossCarpetUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::array<::PaleMossCarpetSide, 4>
computeBottomSidesForDoubleBlock(::BlockSource const& region, ::BlockPos const& pos);

MCNAPI ::std::array<::PaleMossCarpetSide, 4>
computeBottomSidesForSingleBlock(::BlockSource const& region, ::BlockPos const& pos);

MCNAPI ::std::array<::PaleMossCarpetSide, 4> computeTopSides(::BlockSource const& region, ::BlockPos const& pos);

MCNAPI ::std::array<::PaleMossCarpetSide, 4> getSides(::Block const& block);
// NOLINTEND

} // namespace PaleMossCarpetUtils
