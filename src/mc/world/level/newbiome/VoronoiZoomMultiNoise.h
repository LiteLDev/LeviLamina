#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoronoiZoomMultiNoise {
// NOLINTBEGIN
MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const& positionalRandom, class BlockPos pos);

MCAPI uint getZoomedVoronoiCellIndex(
    class BlockPos                 inPos,
    std::vector<class Vec3> const& voronoiCellOffsets,
    uint                           minCellIndex,
    uint                           bufferXZSize,
    uint                           bufferYSize
);
// NOLINTEND

}; // namespace VoronoiZoomMultiNoise
