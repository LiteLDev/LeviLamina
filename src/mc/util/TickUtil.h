#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickUtil {
// NOLINTBEGIN
// symbol: ?chunkBoundsToGridBounds@TickUtil@@YA?AU?$pair@VBlockPos@@V1@@std@@AEBVPos@@0@Z
MCAPI std::pair<class BlockPos, class BlockPos>
      chunkBoundsToGridBounds(class Pos const& chunkMin, class Pos const& chunkMax);

// symbol: ?getDeterministicBounds@TickUtil@@YA?AUBounds@@AEBU2@@Z
MCAPI struct Bounds getDeterministicBounds(struct Bounds const& bounds);

// symbol: ?getRandomInBounds@TickUtil@@YA?AVChunkPos@@AEBUBounds@@AEAVRandom@@@Z
MCAPI class ChunkPos getRandomInBounds(struct Bounds const& bounds, class Random& random);
// NOLINTEND

}; // namespace TickUtil
