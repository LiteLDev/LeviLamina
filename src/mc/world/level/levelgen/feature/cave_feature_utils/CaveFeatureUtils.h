#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

namespace CaveFeatureUtils {
// functions
// NOLINTBEGIN
MCNAPI int getDistance_1_16(::Random& random);

MCNAPI int getDistance_1_18(::Random& random);

MCNAPI float getTunnelThickness_1_16(::Random& random);

MCNAPI float getTunnelThickness_1_18(::Random& random);

MCNAPI bool isDiggable_1_16(::Block const& block, ::Block const& above);

MCNAPI bool isDiggable_1_18(::Block const& block, ::Block const&);
// NOLINTEND

} // namespace CaveFeatureUtils
