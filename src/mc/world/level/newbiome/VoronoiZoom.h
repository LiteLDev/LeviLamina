#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

namespace VoronoiZoom {
// functions
// NOLINTBEGIN
MCAPI uint getZoomedVoronoiCellIndex(
    ::BlockPos                   inPos,
    ::std::vector<::Vec3> const& voronoiCellOffsets,
    uint                         minCellIndex,
    uint                         bufferXZSize,
    uint                         bufferYSize
);
// NOLINTEND

} // namespace VoronoiZoom
