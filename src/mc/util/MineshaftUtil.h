#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MineshaftUtil {
// NOLINTBEGIN
// symbol: ?_isLava@MineshaftUtil@@YA_NAEBVBlockLegacy@@@Z
MCAPI bool _isLava(class BlockLegacy const& block);

// symbol: ?fillColumnBetween@MineshaftUtil@@YAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@HH@Z
MCAPI void fillColumnBetween(class BlockSource& region, class Block const&, class BlockPos const& pos, int, int);
// NOLINTEND

}; // namespace MineshaftUtil
