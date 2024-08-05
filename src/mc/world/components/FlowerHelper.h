#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FlowerPlacementType.h"

namespace FlowerHelper {
// NOLINTBEGIN
MCAPI class Block const& getRandomFlowerBlock(
    ::FlowerPlacementType           type,
    class BlockPos const&           pos,
    class Random&                   random,
    class PerlinSimplexNoise const& biomeInfoNoise
);

MCAPI class Block const& getRandomFlowerBlock(
    class Biome const&              biome,
    class BlockPos const&           pos,
    class Random&                   random,
    class BiomeRegistry&            biomeRegistry,
    class PerlinSimplexNoise const& biomeInfoNoise
);
// NOLINTEND

}; // namespace FlowerHelper
