#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/locate_command_util/Biomes.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BlockPos;
class Dimension;
struct BiomeIdType;
// clang-format on

namespace LocateCommandUtil {
// functions
// NOLINTBEGIN
MCAPI ::std::string getBiomeName(::BiomeRegistry const& biomeRegistry, ::LocateCommandUtil::Biomes biomeId);

MCAPI ::std::optional<::BlockPos> locateNearbyBiomeByPredicate(
    ::BlockPos                                   position,
    ::Dimension*                                 dimension,
    ::std::function<bool(::Biome const&)> const& predicate
);

MCAPI ::std::optional<::BlockPos>
locateNearbyBiomeInSet(::BlockPos position, ::Dimension* dimension, ::std::set<::BiomeIdType> const& biomes);
// NOLINTEND

} // namespace LocateCommandUtil
