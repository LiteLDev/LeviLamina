#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeSourceUtil {
// NOLINTBEGIN
// symbol: ?determineDestinationHeight@BiomeSourceUtil@@YAFAEBVDimension@@VBlockPos@@@Z
MCAPI short determineDestinationHeight(class Dimension const& dimension, class BlockPos destination);

// symbol:
// ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBoundingBox@@I@Z
MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const& predicate,
    class BiomeSource const&                       biomeSource,
    class BoundingBox const&                       bounds,
    uint                                           resolution
);

// symbol:
// ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@2I@Z
MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const& predicate,
    class BiomeSource const&                       biomeSource,
    class BlockPos const&                          center,
    class BlockPos const&,
    uint resolution
);

// symbol:
// ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@VBoundingBox@@I@Z
MCAPI std::optional<class BlockPos> locateBiome(
    std::function<bool(class Biome const&)> const& predicate,
    class BiomeSource const&                       biomeSource,
    class BlockPos const&                          center,
    class BoundingBox,
    uint resolution
);
// NOLINTEND

}; // namespace BiomeSourceUtil
