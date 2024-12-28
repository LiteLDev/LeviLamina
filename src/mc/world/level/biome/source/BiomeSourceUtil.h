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
MCAPI short determineDestinationHeight(::Dimension const& dimension, ::BlockPos destination);

MCAPI ::std::optional<::BlockPos> locateBiome(
    ::std::function<bool(::Biome const&)> const& predicate,
    ::BiomeSource const&                         biomeSource,
    ::BoundingBox const&                         bounds,
    uint                                         resolution
);

MCAPI ::std::optional<::BlockPos> locateBiome(
    ::std::function<bool(::Biome const&)> const& predicate,
    ::BiomeSource const&                         biomeSource,
    ::BlockPos const&                            center,
    ::BlockPos const&                            ranges,
    uint                                         resolution
);

MCAPI ::std::optional<::BlockPos> locateBiome(
    ::std::function<bool(::Biome const&)> const& predicate,
    ::BiomeSource const&                         biomeSource,
    ::BlockPos const&                            center,
    ::BoundingBox                                worldBounds,
    uint                                         resolution
);
// NOLINTEND

} // namespace BiomeSourceUtil
