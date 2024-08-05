#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CachedHeightGenerator {
// NOLINTBEGIN
MCAPI short cachedGenerationOfTerrainHeight(
    class BlockPos const&                                                    pos,
    class Dimension&                                                         dimension,
    class BlockVolume&                                                       blockVolume,
    std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>& chunkHeightCache
);
// NOLINTEND

}; // namespace CachedHeightGenerator
