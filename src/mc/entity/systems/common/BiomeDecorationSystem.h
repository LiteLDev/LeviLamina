#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/GeneratorType.h"

namespace BiomeDecorationSystem {
// NOLINTBEGIN
// symbol:
// ?decorate@BiomeDecorationSystem@@YAXAEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@AEAV?$vector@PEBVBiome@@V?$allocator@PEBVBiome@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@AEBVIPreliminarySurfaceProvider@@@Z
MCAPI void
decorate(class LevelChunk& lc, class BlockSource& source, class Random& random, std::vector<class Biome const*>&, std::string const& pass, class IPreliminarySurfaceProvider const&);

// symbol:
// ?decorateBiome@BiomeDecorationSystem@@YA_NAEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@V?$span@$$CBUBiomeDecorationFeature@@$0?0@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVBiome@@AEBVIPreliminarySurfaceProvider@@@Z
MCAPI bool
decorateBiome(class LevelChunk& lc, class BlockSource& source, class Random& random, gsl::span<struct BiomeDecorationFeature const> featureList, std::string const& pass, class Biome const* biome, class IPreliminarySurfaceProvider const&);

// symbol:
// ?decorateLargeFeature@BiomeDecorationSystem@@YA_NW4GeneratorType@@AEBIAEAVBlockVolumeTarget@@AEAVRandom@@V?$span@$$CBUBiomeDecorationFeature@@$0?0@gsl@@AEBVChunkPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool
decorateLargeFeature(::GeneratorType, uint const&, class BlockVolumeTarget&, class Random&, gsl::span<struct BiomeDecorationFeature const>, class ChunkPos const&, std::string const&);

// symbol:
// ?decorateLargeFeature@BiomeDecorationSystem@@YAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
