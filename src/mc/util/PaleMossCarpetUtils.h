#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/PaleMossCarpetSide.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

namespace PaleMossCarpetUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::array<::PaleMossCarpetSide, 4>
computeBottomSidesForSingleBlock(::BlockSource const& region, ::BlockPos const& pos);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::array<::PaleMossCarpetSide, 4> const& NO_SIDES();
// NOLINTEND

} // namespace PaleMossCarpetUtils
