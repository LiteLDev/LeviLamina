#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SlabBlockItemUtil {
// NOLINTBEGIN
MCAPI void convertToDoubleBlock(
    class ItemStack&      instance,
    class Actor&          actor,
    class BlockPos const& pos,
    class Block const&    doubleBlock
);
// NOLINTEND

}; // namespace SlabBlockItemUtil
