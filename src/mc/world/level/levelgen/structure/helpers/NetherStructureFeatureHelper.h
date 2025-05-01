#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class ChunkPos;
class HashedString;
class Random;
// clang-format on

namespace NetherStructureFeatureHelper {
// functions
// NOLINTBEGIN
MCNAPI ::HashedString getStructureFeatureTypeForChunk(
    ::BiomeSource const&         biomeSource,
    ::Random&                    random,
    ::ChunkPos const&            chunkPos,
    uint                         levelSeed,
    ::std::vector<uint64> const& allowedBiomes
);
// NOLINTEND

} // namespace NetherStructureFeatureHelper
