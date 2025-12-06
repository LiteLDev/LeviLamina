#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/VolumeOf.h"

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
MCAPI ::std::vector<bool> calculateBlendingNeeds(::BiomeChunkVolume::BiomeSamplesContainer const& biomeData);

MCAPI ::std::vector<::Vec3> const
calculateVoronoiOffsets(uint levelSeed, ::BlockPos bufferWorldOrigin, int bufferSizeXZ, int bufferSizeY);

MCAPI ::ClientBlockPipeline::VolumeOf<::Biome const*> makeBiomeVolumeForChunk(
    ::BiomeChunkVolume::BiomeSamplesContainer const& biomeData,
    short                                            chunkHeight,
    ::BlockPos                                       chunkMin,
    uint                                             levelSeed
);
// NOLINTEND

} // namespace BiomeChunkVolume
