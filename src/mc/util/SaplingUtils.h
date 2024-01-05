#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SaplingUtils {
// NOLINTBEGIN
// symbol: ?isNearFlowerBlock@SaplingUtils@@YA_NAEAVBlockSource@@AEBVBlockPos@@@Z
MCAPI bool isNearFlowerBlock(class BlockSource& region, class BlockPos const& pos);

// symbol: ?shouldTreeContainBeehive@SaplingUtils@@YA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
MCAPI bool shouldTreeContainBeehive(class BlockSource& region, class BlockPos const& pos, class Random& random);
// NOLINTEND

}; // namespace SaplingUtils
