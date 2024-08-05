#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WitherBossSpawnUtilities {
// NOLINTBEGIN
MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilder(class BlockSource& region);

MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilderForTShape(class BlockSource& region);
// NOLINTEND

}; // namespace WitherBossSpawnUtilities
