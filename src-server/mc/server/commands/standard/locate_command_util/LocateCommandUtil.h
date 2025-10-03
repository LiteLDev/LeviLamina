#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/locate_command_util/Biomes.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
// clang-format on

namespace LocateCommandUtil {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::BlockPos>
locateNearbyBiome(::BlockPos position, ::Dimension* dimension, ::LocateCommandUtil::Biomes biome);
// NOLINTEND

} // namespace LocateCommandUtil
