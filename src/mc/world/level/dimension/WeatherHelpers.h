#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WeatherHelpers {
/**
 * @symbol ?getTopRainBlockPos\@WeatherHelpers\@\@YA?BVBlockPos\@\@PEAVLevelChunk\@\@AEBV2\@\@Z
 */
MCAPI class BlockPos const getTopRainBlockPos(class LevelChunk*, class BlockPos const&);
/**
 * @symbol ?shouldFreeze\@WeatherHelpers\@\@YA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
 */
MCAPI bool shouldFreeze(class BlockSource&, class BlockPos const&, bool);
/**
 * @symbol ?shouldSnow\@WeatherHelpers\@\@YA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI bool shouldSnow(class BlockSource&, class BlockPos const&);

}; // namespace WeatherHelpers
