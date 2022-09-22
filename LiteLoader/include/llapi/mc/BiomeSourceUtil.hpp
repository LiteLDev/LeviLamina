/**
 * @file  BiomeSourceUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BiomeSourceUtil.
 *
 */
namespace BiomeSourceUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   5582732
     * @symbol ?determineDestinationHeight@BiomeSourceUtil@@YAFAEBVDimension@@VBlockPos@@@Z
     */
    MCAPI short determineDestinationHeight(class Dimension const &, class BlockPos);
    /**
     * @hash   -991553808
     * @symbol ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@2I@Z
     */
    MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BlockPos const &, class BlockPos const &, unsigned int);
    /**
     * @hash   -651923495
     * @symbol ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@VBoundingBox@@I@Z
     */
    MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BlockPos const &, class BoundingBox, unsigned int);
    /**
     * @hash   1729162604
     * @symbol ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBoundingBox@@I@Z
     */
    MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BoundingBox const &, unsigned int);

};