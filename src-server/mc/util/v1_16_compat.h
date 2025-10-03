#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
struct BiomeIdType;
// clang-format on

namespace BiomeSourceUtil::v1_16_compat {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::BlockPos>
locateSpawnBiome2d(::std::set<::BiomeIdType> const& biomes, ::BiomeSource const& biomeSource, int startingX);
// NOLINTEND

} // namespace BiomeSourceUtil::v1_16_compat
