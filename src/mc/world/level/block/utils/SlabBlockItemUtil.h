#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SlabBlockItemUtil {
// NOLINTBEGIN
// symbol: ?convertToDoubleBlock@SlabBlockItemUtil@@YAXAEAVItemStack@@AEAVActor@@AEBVBlockPos@@AEBVBlock@@@Z
MCAPI void convertToDoubleBlock(
    class ItemStack&      instance,
    class Actor&          actor,
    class BlockPos const& pos,
    class Block const&    doubleBlock
);
// NOLINTEND

}; // namespace SlabBlockItemUtil
