#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickUtil {
/**
 * @symbol ?chunkBoundsToGridBounds\@TickUtil\@\@YA?AU?$pair\@VBlockPos\@\@V1\@\@std\@\@AEBVPos\@\@0\@Z
 */
MCAPI struct std::pair<class BlockPos, class BlockPos> chunkBoundsToGridBounds(class Pos const&, class Pos const&);
/**
 * @symbol ?getDeterministicBounds\@TickUtil\@\@YA?AUBounds\@\@AEBU2\@\@Z
 */
MCAPI struct Bounds getDeterministicBounds(struct Bounds const&);
/**
 * @symbol ?getRandomInBounds\@TickUtil\@\@YA?AVChunkPos\@\@AEBUBounds\@\@AEAVRandom\@\@\@Z
 */
MCAPI class ChunkPos getRandomInBounds(struct Bounds const&, class Random&);

}; // namespace TickUtil
