#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeSource;
class BlockPos;
class BoundingBox;
class Dimension;
// clang-format on

namespace BiomeSourceUtil {
// functions
// NOLINTBEGIN
MCNAPI short determineDestinationHeight(::Dimension const& dimension, ::BlockPos const& destination);

MCNAPI ::BlockPos determineUndergroundDestination(
    ::Dimension const&                           dimension,
    ::BlockPos const&                            startDestination,
    ::std::function<bool(::Biome const&)> const& predicate,
    int                                          searchRadius
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
