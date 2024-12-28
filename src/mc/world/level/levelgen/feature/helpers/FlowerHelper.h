#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/FlowerPlacementType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class PerlinSimplexNoise;
class Random;
// clang-format on

namespace FlowerHelper {
// functions
// NOLINTBEGIN
MCAPI ::Block const&
getRandomFlowerBlock(::BlockSource& region, ::BlockPos const& pos, ::PerlinSimplexNoise const& biomeInfoNoise);

MCAPI ::Block const& getRandomFlowerBlock(
    ::FlowerPlacementType       type,
    ::BlockPos const&           pos,
    ::Random&                   random,
    ::PerlinSimplexNoise const& biomeInfoNoise
);
// NOLINTEND

} // namespace FlowerHelper
