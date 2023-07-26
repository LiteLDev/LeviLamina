#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoronoiZoomMultiNoise {
/**
 * @symbol ?getGridOffset\@VoronoiZoomMultiNoise\@\@YA?AVVec3\@\@AEBVSimplePositionalRandomFactory\@\@VBlockPos\@\@\@Z
 */
MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const&, class BlockPos); // NOLINT
/**
 * @symbol
 * ?getZoomedVoronoiCellIndex\@VoronoiZoomMultiNoise\@\@YAIVBlockPos\@\@AEBV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@III\@Z
 */
MCAPI unsigned int getZoomedVoronoiCellIndex(
    class BlockPos,
    std::vector<class Vec3> const&,
    unsigned int,
    unsigned int,
    unsigned int
); // NOLINT

}; // namespace VoronoiZoomMultiNoise
