#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolume;
class ChunkPos;
class Dimension;
// clang-format on

namespace CachedHeightGenerator {
// functions
// NOLINTBEGIN
MCNAPI short cachedGenerationOfTerrainHeight(
    ::BlockPos const&                                                          pos,
    ::Dimension&                                                               dimension,
    ::BlockVolume&                                                             blockVolume,
    ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>& chunkHeightCache
);
// NOLINTEND

} // namespace CachedHeightGenerator
