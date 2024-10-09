#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DepthBasedBlockSupplierUtils {
// NOLINTBEGIN
MCAPI class Block const*
getDepthBasedBlock(int posY, class IRandom& random, class Block const* fillBlock, class Block const* fallbackBlock);
// NOLINTEND

}; // namespace DepthBasedBlockSupplierUtils
