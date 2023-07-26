#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeSourceUtil::v1_16_compat {
/**
 * @symbol
 * ?locateSpawnBiome2d\@v1_16_compat\@BiomeSourceUtil\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBV?$set\@HU?$less\@H\@std\@\@V?$allocator\@H\@2\@\@4\@AEBVBiomeSource\@\@H\@Z
 */
MCAPI class std::optional<class BlockPos> locateSpawnBiome2d(
    class std::set<int, struct std::less<int>, class std::allocator<int>> const&,
    class BiomeSource const&,
    int
); // NOLINT

}; // namespace BiomeSourceUtil::v1_16_compat
