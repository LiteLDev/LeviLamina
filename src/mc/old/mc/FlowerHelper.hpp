/**
 * @file  FlowerHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace FlowerHelper.
 *
 */
namespace FlowerHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?getRandomFlowerBlock\@FlowerHelper\@\@YAAEBVBlock\@\@AEBVBiome\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVBiomeRegistry\@\@AEBVPerlinSimplexNoise\@\@\@Z
     */
    MCAPI class Block const & getRandomFlowerBlock(class Biome const &, class BlockPos const &, class Random &, class BiomeRegistry &, class PerlinSimplexNoise const &);
    /**
     * @symbol  ?getRandomFlowerBlock\@FlowerHelper\@\@YAAEBVBlock\@\@W4FlowerPlacementType\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBVPerlinSimplexNoise\@\@\@Z
     */
    MCAPI class Block const & getRandomFlowerBlock(enum class FlowerPlacementType, class BlockPos const &, class Random &, class PerlinSimplexNoise const &);

};