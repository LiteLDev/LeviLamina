#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeSourceUtil {
/**
 * @symbol ?determineDestinationHeight\@BiomeSourceUtil\@\@YAFAEBVDimension\@\@VBlockPos\@\@\@Z
 */
MCAPI short determineDestinationHeight(class Dimension const&, class BlockPos);
/**
 * @symbol
 * ?locateBiome\@BiomeSourceUtil\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBV?$function\@$$A6A_NAEBVBiome\@\@\@Z\@3\@AEBVBiomeSource\@\@AEBVBlockPos\@\@VBoundingBox\@\@I\@Z
 */
MCAPI class std::optional<class BlockPos> locateBiome(
    class std::function<bool(class Biome const&)> const&,
    class BiomeSource const&,
    class BlockPos const&,
    class BoundingBox,
    unsigned int
);
/**
 * @symbol
 * ?locateBiome\@BiomeSourceUtil\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBV?$function\@$$A6A_NAEBVBiome\@\@\@Z\@3\@AEBVBiomeSource\@\@AEBVBoundingBox\@\@I\@Z
 */
MCAPI class std::optional<class BlockPos> locateBiome(
    class std::function<bool(class Biome const&)> const&,
    class BiomeSource const&,
    class BoundingBox const&,
    unsigned int
);
/**
 * @symbol
 * ?locateBiome\@BiomeSourceUtil\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBV?$function\@$$A6A_NAEBVBiome\@\@\@Z\@3\@AEBVBiomeSource\@\@AEBVBlockPos\@\@2I\@Z
 */
MCAPI class std::optional<class BlockPos> locateBiome(
    class std::function<bool(class Biome const&)> const&,
    class BiomeSource const&,
    class BlockPos const&,
    class BlockPos const&,
    unsigned int
);

}; // namespace BiomeSourceUtil
