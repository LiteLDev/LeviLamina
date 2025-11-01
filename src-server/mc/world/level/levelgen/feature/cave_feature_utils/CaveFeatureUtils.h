#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class Random;
// clang-format on

namespace CaveFeatureUtils {
// functions
// NOLINTBEGIN
MCAPI int getBiasRandomY_1_16(::Random& random, int heightLimit);

MCFOLD int getDistance_1_16(::Random&);

MCAPI int getDistance_1_18(::Random& random);

MCAPI float getTunnelThickness_1_16(::Random& random);

MCAPI float getTunnelThickness_1_18(::Random& random);

MCAPI int getUniformRandomY_1_18(::Random& random, int heightLimit);

MCAPI bool isDiggable_1_16(::Block const& block, ::Block const& above);

MCAPI bool isDiggable_1_18(::Block const& block, ::Block const&);

MCAPI bool isSurface_1_16(::BlockType const& blockType);

MCAPI bool isSurface_1_18(::BlockType const& blockType);
// NOLINTEND

}
