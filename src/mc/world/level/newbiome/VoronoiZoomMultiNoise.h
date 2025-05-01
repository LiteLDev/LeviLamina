#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

namespace VoronoiZoomMultiNoise {
// functions
// NOLINTBEGIN
MCNAPI uint getZoomedVoronoiCellIndex(
    ::BlockPos                   inPos,
    ::std::vector<::Vec3> const& voronoiCellOffsets,
    uint                         minCellIndex,
    uint                         bufferYSize,
    uint                         bufferXZSize
);
// NOLINTEND

} // namespace VoronoiZoomMultiNoise
