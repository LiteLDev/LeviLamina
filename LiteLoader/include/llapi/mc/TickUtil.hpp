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
     * @hash   686733938
     * @symbol  ?chunkBoundsToGridBounds\@TickUtil\@\@YA?AU?$pair\@VBlockPos\@\@V1\@\@std\@\@AEBVPos\@\@0\@Z
     */
    MCAPI struct std::pair<class BlockPos, class BlockPos> chunkBoundsToGridBounds(class Pos const &, class Pos const &);
    /**
     * @hash   901580623
     * @symbol  ?forRandomOffset\@TickUtil\@\@YAXEEAEAVRandom\@\@V?$function\@$$A6AXAEBVPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forRandomOffset(unsigned char, unsigned char, class Random &, class std::function<void (class Pos const &)>);
    /**
     * @hash   234063155
     * @symbol  ?getDeterministicBounds\@TickUtil\@\@YA?AUBounds\@\@AEBU2\@\@Z
     */
    MCAPI struct Bounds getDeterministicBounds(struct Bounds const &);
    /**
     * @hash   -1829811741
     * @symbol  ?getLoadedChunkNeighborBounds\@TickUtil\@\@YA?AUBounds\@\@AEBU2\@\@Z
     */
    MCAPI struct Bounds getLoadedChunkNeighborBounds(struct Bounds const &);
    /**
     * @hash   110568978
     * @symbol  ?getLoadedChunkNeighborPos\@TickUtil\@\@YA?AVChunkPos\@\@AEBVPos\@\@_N1\@Z
     */
    MCAPI class ChunkPos getLoadedChunkNeighborPos(class Pos const &, bool, bool);
    /**
     * @hash   275578563
     * @symbol  ?getRandomInBounds\@TickUtil\@\@YA?AVChunkPos\@\@AEBUBounds\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class ChunkPos getRandomInBounds(struct Bounds const &, class Random &);

};