#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/dynamic_bitset.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class Vec3;
namespace BiomeChunkVolume { struct BiomeSamplesContainer; }
// clang-format on

namespace BiomeChunkVolume {
// functions
// NOLINTBEGIN
MCNAPI ::brstd::dynamic_bitset<uint64, ::std::vector<uint64>>
calculateBlendingNeeds(::BiomeChunkVolume::BiomeSamplesContainer const& biomeData);

MCNAPI ::std::vector<::Vec3> const
calculateVoronoiOffsets(uint levelSeed, ::BlockPos bufferWorldOrigin, int bufferSizeXZ, int bufferSizeY);

MCNAPI ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>> makeBiomeStoragesForChunk(
    ::BiomeChunkVolume::BiomeSamplesContainer const& biomeData,
    short                                            chunkHeight,
    ::BlockPos                                       chunkMin,
    uint                                             levelSeed
);

MCNAPI ::ChunkVolume::VolumeOf<::Biome> makeBiomeVolumeForChunk(
    ::BiomeChunkVolume::BiomeSamplesContainer const& biomeData,
    short                                            chunkHeight,
    ::BlockPos                                       chunkMin,
    uint                                             levelSeed
);
// NOLINTEND

} // namespace BiomeChunkVolume
