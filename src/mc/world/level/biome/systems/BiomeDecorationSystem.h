#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockSource;
class BlockVolumeTarget;
class ChunkPos;
class IPreliminarySurfaceProvider;
class LevelChunk;
class Random;
struct BiomeDecorationFeature;
// clang-format on

namespace BiomeDecorationSystem {
// functions
// NOLINTBEGIN
MCNAPI void decorate(
    ::LevelChunk&                        lc,
    ::BlockSource&                       source,
    ::Random&                            random,
    ::std::vector<::Biome const*>&       uniqueBiomes,
    ::std::string const&                 pass,
    ::IPreliminarySurfaceProvider const& preliminarySurfaceProvider
);

MCNAPI bool decorateBiome(
    ::LevelChunk&                               lc,
    ::BlockSource&                              source,
    ::Random&                                   random,
    ::gsl::span<::BiomeDecorationFeature const> featureList,
    ::std::string const&                        pass,
    ::Biome const*                              biome,
    ::IPreliminarySurfaceProvider const&        preliminarySurfaceProvider
);

MCNAPI bool decorateLargeFeature(
    ::GeneratorType                             generatorType,
    uint const&                                 seed,
    ::BlockVolumeTarget&                        target,
    ::Random&                                   random,
    ::gsl::span<::BiomeDecorationFeature const> featureList,
    ::ChunkPos const&                           pos,
    ::std::string const&                        pass
);

MCNAPI void decorateLargeFeature(
    ::Biome const&       biome,
    ::LevelChunk&        lc,
    ::BlockVolumeTarget& target,
    ::Random&            random,
    ::ChunkPos const&    pos,
    ::std::string const& pass
);
// NOLINTEND

} // namespace BiomeDecorationSystem
