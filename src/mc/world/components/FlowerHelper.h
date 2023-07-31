#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlowerHelper {
// NOLINTBEGIN
/**
 * @symbol
 * ?getRandomFlowerBlock\@FlowerHelper\@\@YAAEBVBlock\@\@AEBVBiome\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVBiomeRegistry\@\@AEBVPerlinSimplexNoise\@\@\@Z
 */
MCAPI class Block const&
getRandomFlowerBlock(class Biome const&, class BlockPos const&, class Random&, class BiomeRegistry&, class PerlinSimplexNoise const&);
/**
 * @symbol
 * ?getRandomFlowerBlock\@FlowerHelper\@\@YAAEBVBlock\@\@W4FlowerPlacementType\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBVPerlinSimplexNoise\@\@\@Z
 */
MCAPI class Block const&
getRandomFlowerBlock(enum class FlowerPlacementType, class BlockPos const&, class Random&, class PerlinSimplexNoise const&);
// NOLINTEND

}; // namespace FlowerHelper
