#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
// clang-format on

namespace DepthBasedBlockSupplierUtils {
// functions
// NOLINTBEGIN
MCAPI ::Block const*
getDepthBasedBlock(int posY, ::IRandom& random, ::Block const* fillBlock, ::Block const* fallbackBlock);
// NOLINTEND

} // namespace DepthBasedBlockSupplierUtils
