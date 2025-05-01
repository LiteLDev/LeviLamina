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
MCNAPI ::std::optional<::BlockPos>
locateSpawnBiome2d(::std::set<ushort> const& biomeSource, ::BiomeSource const& biomes, int startingX);
// NOLINTEND

} // namespace BiomeSourceUtil::v1_16_compat
