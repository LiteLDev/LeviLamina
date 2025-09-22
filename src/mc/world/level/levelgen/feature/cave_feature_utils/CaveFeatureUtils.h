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
MCNAPI int getBiasRandomY_1_16(::Random& random, int heightLimit);

MCNAPI int getDistance_1_16(::Random&);

MCNAPI int getDistance_1_18(::Random& random);

MCNAPI float getTunnelThickness_1_16(::Random& random);

MCNAPI float getTunnelThickness_1_18(::Random& random);

MCNAPI int getUniformRandomY_1_18(::Random& random, int heightLimit);

MCNAPI bool isDiggable_1_16(::Block const& block, ::Block const& above);

MCNAPI bool isDiggable_1_18(::Block const& block, ::Block const&);

MCNAPI bool isSurface_1_16(::BlockType const& blockType);

MCNAPI bool isSurface_1_18(::BlockType const& blockType);
// NOLINTEND

} // namespace CaveFeatureUtils
