#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/chunk_volume/VolumeOf.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
namespace BiomeChunkVolume { struct BiomeSamplesContainer; }
// clang-format on

namespace BiomeChunkVolume {
// functions
// NOLINTBEGIN
MCAPI ::ChunkVolume::VolumeOf<::Biome> makeBiomeVolumeForChunk(
    ::BiomeChunkVolume::BiomeSamplesContainer const& biomeData,
    short                                            chunkHeight,
    ::BlockPos                                       chunkMin,
    uint                                             levelSeed
);
// NOLINTEND

} // namespace BiomeChunkVolume
