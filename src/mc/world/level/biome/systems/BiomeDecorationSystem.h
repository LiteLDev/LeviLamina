#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"

namespace BiomeDecorationSystem {
// NOLINTBEGIN
MCAPI void consolidateDecorationFeatures(class BiomeRegistry& registry);

MCAPI void decorate(
    class LevelChunk&                        lc,
    class BlockSource&                       source,
    class Random&                            random,
    std::vector<class Biome const*>&         uniqueBiomes,
    std::string const&                       pass,
    class IPreliminarySurfaceProvider const& preliminarySurfaceProvider
);

MCAPI bool decorateBiome(
    class LevelChunk&                              lc,
    class BlockSource&                             source,
    class Random&                                  random,
    gsl::span<struct BiomeDecorationFeature const> featureList,
    std::string const&                             pass,
    class Biome const*                             biome,
    class IPreliminarySurfaceProvider const&       preliminarySurfaceProvider
);

MCAPI bool decorateLargeFeature(
    ::GeneratorType                                generatorType,
    uint const&                                    seed,
    class BlockVolumeTarget&                       target,
    class Random&                                  random,
    gsl::span<struct BiomeDecorationFeature const> featureList,
    class ChunkPos const&                          pos,
    std::string const&                             pass
);

MCAPI void decorateLargeFeature(
    class Biome const&       biome,
    class LevelChunk&        lc,
    class BlockVolumeTarget& target,
    class Random&            random,
    class ChunkPos const&    pos,
    std::string const&       pass
);
// NOLINTEND

}; // namespace BiomeDecorationSystem
