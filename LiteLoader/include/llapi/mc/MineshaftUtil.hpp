/**
 * @file  MineshaftUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace MineshaftUtil.
 *
 */
namespace MineshaftUtil {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   161804432
     * @symbol  ?_isLava\@MineshaftUtil\@\@YA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool _isLava(class BlockLegacy const &);
    /**
     * @hash   1319278243
     * @symbol  ?fillColumnBetween\@MineshaftUtil\@\@YAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI void fillColumnBetween(class BlockSource &, class Block const &, class BlockPos const &, int, int);
    /**
     * @hash   -2030549886
     * @symbol  ?isCavesAndCliffs\@MineshaftUtil\@\@YA_NAEBVLevel\@\@\@Z
     */
    MCAPI bool isCavesAndCliffs(class Level const &);

};