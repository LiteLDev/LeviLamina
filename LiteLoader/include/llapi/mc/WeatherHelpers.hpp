/**
 * @file  WeatherHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace WeatherHelpers.
 *
 */
namespace WeatherHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -654572419
     * @symbol ?getTopRainBlockPos@WeatherHelpers@@YA?BVBlockPos@@PEAVLevelChunk@@AEBV2@@Z
     */
    MCAPI class BlockPos const getTopRainBlockPos(class LevelChunk *, class BlockPos const &);
    /**
     * @hash   2070290976
     * @symbol ?shouldFreeze@WeatherHelpers@@YA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI bool shouldFreeze(class BlockSource &, class BlockPos const &, bool);
    /**
     * @hash   2029377911
     * @symbol ?shouldSnow@WeatherHelpers@@YA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool shouldSnow(class BlockSource &, class BlockPos const &);

};