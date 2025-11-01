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
computeBottomSidesForSingleBlock(::BlockSource const& region, ::BlockPos const& pos);

MCNAPI ::Block const& setSides(::Block const& block, ::std::array<::PaleMossCarpetSide, 4> const& sides);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::array<::PaleMossCarpetSide, 4> const& NO_SIDES();
// NOLINTEND

} // namespace PaleMossCarpetUtils
