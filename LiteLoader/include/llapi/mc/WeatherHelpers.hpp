/**
 * @file  WeatherHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   224242861
     * @symbol  ?getTopRainBlockPos\@WeatherHelpers\@\@YA?BVBlockPos\@\@PEAVLevelChunk\@\@AEBV2\@\@Z
     */
    MCAPI class BlockPos const getTopRainBlockPos(class LevelChunk *, class BlockPos const &);
    /**
     * @hash   -1345861040
     * @symbol  ?shouldFreeze\@WeatherHelpers\@\@YA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool shouldFreeze(class BlockSource &, class BlockPos const &, bool);
    /**
     * @hash   -1386727977
     * @symbol  ?shouldSnow\@WeatherHelpers\@\@YA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool shouldSnow(class BlockSource &, class BlockPos const &);

};