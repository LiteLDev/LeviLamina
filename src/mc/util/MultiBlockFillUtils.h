#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
// clang-format on

namespace MultiBlockFillUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::unordered_set<::BlockPos>
getStartPositionsInVolume(::BlockPos const& min, ::BlockPos const& max, ::Block const& block);
// NOLINTEND

} // namespace MultiBlockFillUtils
