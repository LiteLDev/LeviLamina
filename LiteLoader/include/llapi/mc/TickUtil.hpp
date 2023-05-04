/**
 * @file  TickUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace TickUtil.
 *
 */
namespace TickUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?chunkBoundsToGridBounds\@TickUtil\@\@YA?AU?$pair\@VBlockPos\@\@V1\@\@std\@\@AEBVPos\@\@0\@Z
     */
    MCAPI struct std::pair<class BlockPos, class BlockPos> chunkBoundsToGridBounds(class Pos const &, class Pos const &);
    /**
     * @symbol ?getDeterministicBounds\@TickUtil\@\@YA?AUBounds\@\@AEBU2\@\@Z
     */
    MCAPI struct Bounds getDeterministicBounds(struct Bounds const &);
    /**
     * @symbol ?getRandomInBounds\@TickUtil\@\@YA?AVChunkPos\@\@AEBUBounds\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class ChunkPos getRandomInBounds(struct Bounds const &, class Random &);

};