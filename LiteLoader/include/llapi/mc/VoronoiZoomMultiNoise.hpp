/**
 * @file  VoronoiZoomMultiNoise.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VoronoiZoomMultiNoise.
 *
 */
namespace VoronoiZoomMultiNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -238330605
     * @symbol  ?getGridOffset\@VoronoiZoomMultiNoise\@\@YA?AVVec3\@\@AEBVSimplePositionalRandomFactory\@\@VBlockPos\@\@\@Z
     */
    MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const &, class BlockPos);
    /**
     * @hash   -498078406
     * @symbol  ?getZoomedVoronoiCellIndex\@VoronoiZoomMultiNoise\@\@YAIVBlockPos\@\@AEBV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@III\@Z
     */
    MCAPI unsigned int getZoomedVoronoiCellIndex(class BlockPos, std::vector<class Vec3> const &, unsigned int, unsigned int, unsigned int);

};