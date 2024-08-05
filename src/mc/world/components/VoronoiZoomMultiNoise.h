#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoronoiZoomMultiNoise {
// NOLINTBEGIN
MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const&, class BlockPos pos);

MCAPI uint getZoomedVoronoiCellIndex(class BlockPos inPos, std::vector<class Vec3> const&, uint, uint, uint);
// NOLINTEND

}; // namespace VoronoiZoomMultiNoise
