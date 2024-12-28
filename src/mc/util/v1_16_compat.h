#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
// clang-format on

namespace BiomeSourceUtil::v1_16_compat {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::BlockPos>
locateSpawnBiome2d(::std::set<ushort> const& biomes, ::BiomeSource const& biomeSource, int startingX);
// NOLINTEND

} // namespace BiomeSourceUtil::v1_16_compat
