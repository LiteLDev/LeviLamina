#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class PerlinSimplexNoise;
// clang-format on

namespace FlowerHelper {
// functions
// NOLINTBEGIN
MCAPI ::Block const&
getRandomFlowerBlock(::BlockSource& region, ::BlockPos const& pos, ::PerlinSimplexNoise const& biomeInfoNoise);
// NOLINTEND

} // namespace FlowerHelper
