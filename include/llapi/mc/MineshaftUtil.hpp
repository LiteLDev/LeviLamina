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
     * @symbol  ?_isLava\@MineshaftUtil\@\@YA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool _isLava(class BlockLegacy const &);
    /**
     * @symbol  ?fillColumnBetween\@MineshaftUtil\@\@YAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI void fillColumnBetween(class BlockSource &, class Block const &, class BlockPos const &, int, int);
    /**
     * @symbol  ?isCavesAndCliffs\@MineshaftUtil\@\@YA_NAEBVLevel\@\@\@Z
     */
    MCAPI bool isCavesAndCliffs(class Level const &);

};