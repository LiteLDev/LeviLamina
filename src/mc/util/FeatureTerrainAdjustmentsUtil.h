#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureTerrainAdjustmentsUtil {
// NOLINTBEGIN
MCAPI std::vector<class ChunkPos> _findIntersectingChunks(class BlockPos const& bbMin, class BlockPos const& bbMax);
// NOLINTEND

}; // namespace FeatureTerrainAdjustmentsUtil
