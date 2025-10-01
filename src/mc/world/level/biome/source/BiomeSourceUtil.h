#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeSource;
class BlockPos;
class BoundingBox;
class Dimension;
struct BiomeIdType;
// clang-format on

namespace BiomeSourceUtil {
// functions
// NOLINTBEGIN
MCNAPI short determineDestinationHeight(::Dimension const& dimension, ::BlockPos const& destination);

MCNAPI ::BlockPos determineUndergroundDestinationForBiome(
    ::Dimension const& dimension,
    ::BlockPos const&  startDestination,
    ::BiomeIdType      biomeId,
    int                searchRadius
);

MCNAPI ::std::optional<::BlockPos> locateBiome(
    ::std::function<bool(::Biome const&)> const& predicate,
    ::BiomeSource const&                         biomeSource,
    ::BlockPos const&                            center,
    ::BoundingBox                                worldBounds,
    uint                                         resolution
);
// NOLINTEND

} // namespace BiomeSourceUtil
