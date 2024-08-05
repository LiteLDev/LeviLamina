#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickUtil {
// NOLINTBEGIN
MCAPI std::pair<class BlockPos, class BlockPos>
      chunkBoundsToGridBounds(class Pos const& chunkMin, class Pos const& chunkMax);

MCAPI struct Bounds getDeterministicBounds(struct Bounds const& bounds);

MCAPI class ChunkPos getRandomInBounds(struct Bounds const& bounds, class Random& random);
// NOLINTEND

}; // namespace TickUtil
