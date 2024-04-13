#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
// clang-format on

namespace BiomeSourceUtil::v1_16_compat {
// NOLINTBEGIN
// symbol:
// ?locateSpawnBiome2d@v1_16_compat@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$set@HU?$less@H@std@@V?$allocator@H@2@@4@AEBVBiomeSource@@H@Z
MCAPI std::optional<class BlockPos>
      locateSpawnBiome2d(std::set<int> const& biomes, class BiomeSource const& biomeSource, int startingX);
// NOLINTEND

}; // namespace BiomeSourceUtil::v1_16_compat
