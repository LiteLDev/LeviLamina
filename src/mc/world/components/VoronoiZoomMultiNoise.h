#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoronoiZoomMultiNoise {
// NOLINTBEGIN
// symbol: ?getGridOffset@VoronoiZoomMultiNoise@@YA?AVVec3@@AEBVSimplePositionalRandomFactory@@VBlockPos@@@Z
MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const&, class BlockPos pos);

// symbol:
// ?getZoomedVoronoiCellIndex@VoronoiZoomMultiNoise@@YAIVBlockPos@@AEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@III@Z
MCAPI uint getZoomedVoronoiCellIndex(class BlockPos inPos, std::vector<class Vec3> const&, uint, uint, uint);
// NOLINTEND

}; // namespace VoronoiZoomMultiNoise
