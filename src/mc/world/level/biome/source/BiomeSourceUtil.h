#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeSourceUtil {
// NOLINTBEGIN
MCAPI short determineDestinationHeight(class Dimension const& dimension, class BlockPos destination);

MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const& predicate,
    class BiomeSource const&                       biomeSource,
    class BoundingBox const&                       bounds,
    uint                                           resolution
);

MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const& predicate,
    class BiomeSource const&                       biomeSource,
    class BlockPos const&                          center,
    class BlockPos const&                          ranges,
    uint                                           resolution
);

MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const& predicate,
    class BiomeSource const&                       biomeSource,
    class BlockPos const&                          center,
    class BoundingBox                              worldBounds,
    uint                                           resolution
);
// NOLINTEND

}; // namespace BiomeSourceUtil
