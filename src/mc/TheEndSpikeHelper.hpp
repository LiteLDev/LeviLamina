/**
 * @file  TheEndSpikeHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "SpikeFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace TheEndSpikeHelper.
 *
 */
namespace TheEndSpikeHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?getSpikesForLevel\@TheEndSpikeHelper\@\@YA?AV?$vector\@VEndSpike\@SpikeFeature\@\@V?$allocator\@VEndSpike\@SpikeFeature\@\@\@std\@\@\@std\@\@AEAVLevel\@\@\@Z
     */
    MCAPI std::vector<class SpikeFeature::EndSpike> getSpikesForLevel(class Level &);

};