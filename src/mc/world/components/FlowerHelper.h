#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FlowerPlacementType.h"

namespace FlowerHelper {
// NOLINTBEGIN
// symbol:
// ?getRandomFlowerBlock@FlowerHelper@@YAAEBVBlock@@W4FlowerPlacementType@@AEBVBlockPos@@AEAVRandom@@AEBVPerlinSimplexNoise@@@Z
MCAPI class Block const& getRandomFlowerBlock(
    ::FlowerPlacementType           type,
    class BlockPos const&           pos,
    class Random&                   random,
    class PerlinSimplexNoise const& biomeInfoNoise
);

// symbol:
// ?getRandomFlowerBlock@FlowerHelper@@YAAEBVBlock@@AEBVBiome@@AEBVBlockPos@@AEAVRandom@@AEAVBiomeRegistry@@AEBVPerlinSimplexNoise@@@Z
MCAPI class Block const& getRandomFlowerBlock(
    class Biome const&              biome,
    class BlockPos const&           pos,
    class Random&                   random,
    class BiomeRegistry&            biomeRegistry,
    class PerlinSimplexNoise const& biomeInfoNoise
);
// NOLINTEND

}; // namespace FlowerHelper
