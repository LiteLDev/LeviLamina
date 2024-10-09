#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MineshaftUtil {
// NOLINTBEGIN
MCAPI bool _isLava(class BlockLegacy const& block);

MCAPI void fillColumnBetween(
    class BlockSource&    region,
    class Block const&    pillarBlock,
    class BlockPos const& pos,
    int                   bottomInclusive,
    int                   topExclusive
);
// NOLINTEND

}; // namespace MineshaftUtil
