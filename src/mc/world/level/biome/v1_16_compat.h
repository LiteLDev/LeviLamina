#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
// clang-format on

namespace BiomeSourceUtil::v1_16_compat {
// NOLINTBEGIN
MCAPI std::optional<class BlockPos>
      locateSpawnBiome2d(std::set<int> const& biomes, class BiomeSource const& biomeSource, int startingX);
// NOLINTEND

}; // namespace BiomeSourceUtil::v1_16_compat
