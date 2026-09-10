#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
class BlockVolume;
class DimensionHeightRange;
class LevelChunk;
class LevelSeed64;
class SurfaceBuilderRegistry;
class SurfaceLevelCache;
namespace BiomeSurfaceSystem { struct SurfaceBuilderParamsResult; }
// clang-format on

namespace BiomeSurfaceSystem {
// functions
// NOLINTBEGIN
MCAPI void buildChunkSurface(
    ::LevelChunk const&                                     levelChunk,
    ::BlockVolume&                                          blocks,
    ::SurfaceLevelCache const&                              surfaceLevelCache,
    ::DimensionHeightRange                                  dimensionHeightRange,
    ::std::array<float, 256> const*                         depthBuffer,
    ::ISurfaceBuilder::GlobalParameters const&              globalParams,
    ::BiomeSurfaceSystem::SurfaceBuilderParamsResult const& surfaceBuilderParamsResult
);

MCAPI ::BiomeSurfaceSystem::SurfaceBuilderParamsResult findBiomesAndPrepareChunkParams(::LevelChunk const& levelChunk);

#ifdef LL_PLAT_C
MCAPI void resolveBuilderImplementation(
    ::BiomeRegistry&                biomeRegistry,
    ::SurfaceBuilderRegistry const& surfaceBuilderRegistry,
    ::LevelSeed64                   levelSeed
);
#endif
// NOLINTEND

} // namespace BiomeSurfaceSystem
