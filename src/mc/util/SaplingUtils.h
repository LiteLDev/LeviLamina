#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SaplingUtils {
// NOLINTBEGIN
MCAPI bool isNearFlowerBlock(class BlockSource& region, class BlockPos const& pos);

MCAPI bool shouldTreeContainBeehive(class BlockSource& region, class BlockPos const& pos, class Random& random);
// NOLINTEND

}; // namespace SaplingUtils
