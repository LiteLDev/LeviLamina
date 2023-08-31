#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeSourceUtil {
// NOLINTBEGIN
/**
 * @symbol ?determineDestinationHeight\@BiomeSourceUtil\@\@YAFAEBVDimension\@\@VBlockPos\@\@\@Z
 */
MCAPI int16_t determineDestinationHeight(class Dimension const&, class BlockPos);
/**
 * @symbol
 * ?locateBiome\@BiomeSourceUtil\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBV?$function\@$$A6A_NAEBVBiome\@\@\@Z\@3\@AEBVBiomeSource\@\@AEBVBlockPos\@\@VBoundingBox\@\@I\@Z
 */
MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const&,
    class BiomeSource const&,
    class BlockPos const&,
    class BoundingBox,
    uint32_t
);
/**
 * @symbol
 * ?locateBiome\@BiomeSourceUtil\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBV?$function\@$$A6A_NAEBVBiome\@\@\@Z\@3\@AEBVBiomeSource\@\@AEBVBoundingBox\@\@I\@Z
 */
MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const&,
    class BiomeSource const&,
    class BoundingBox const&,
    uint32_t
);
/**
 * @symbol
 * ?locateBiome\@BiomeSourceUtil\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBV?$function\@$$A6A_NAEBVBiome\@\@\@Z\@3\@AEBVBiomeSource\@\@AEBVBlockPos\@\@2I\@Z
 */
MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const&,
    class BiomeSource const&,
    class BlockPos const&,
    class BlockPos const&,
    uint32_t
);
// NOLINTEND

}; // namespace BiomeSourceUtil
