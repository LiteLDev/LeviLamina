#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FlowerPlacementType.h"

namespace FlowerHelper {
// NOLINTBEGIN
// symbol:
// ?getRandomFlowerBlock@FlowerHelper@@YAAEBVBlock@@W4FlowerPlacementType@@AEBVBlockPos@@AEAVRandom@@AEBVPerlinSimplexNoise@@@Z
MCAPI class Block const&
getRandomFlowerBlock(::FlowerPlacementType, class BlockPos const&, class Random&, class PerlinSimplexNoise const&);

// symbol:
// ?getRandomFlowerBlock@FlowerHelper@@YAAEBVBlock@@AEBVBiome@@AEBVBlockPos@@AEAVRandom@@AEAVBiomeRegistry@@AEBVPerlinSimplexNoise@@@Z
MCAPI class Block const&
getRandomFlowerBlock(class Biome const&, class BlockPos const&, class Random&, class BiomeRegistry&, class PerlinSimplexNoise const&);
// NOLINTEND

}; // namespace FlowerHelper
