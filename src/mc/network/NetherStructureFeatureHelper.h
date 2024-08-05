#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

namespace NetherStructureFeatureHelper {
// NOLINTBEGIN
MCAPI ::StructureFeatureType getStructureFeatureTypeForChunk(
    class BiomeSource const&   biomeSource,
    class Random&              random,
    class ChunkPos const&      chunkPos,
    uint                       levelSeed,
    std::vector<uint64> const& allowedBiomes
);
// NOLINTEND

}; // namespace NetherStructureFeatureHelper
