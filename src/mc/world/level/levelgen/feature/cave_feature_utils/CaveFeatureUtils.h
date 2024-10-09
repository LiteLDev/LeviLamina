#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
// clang-format on

namespace CaveFeatureUtils {
// NOLINTBEGIN
MCAPI struct CaveFeatureUtils::CarverConfiguration const& getCurrentConfiguration(bool is_1_18_WorldGeneration);

MCAPI int getDistance_1_16(class Random& random);

MCAPI int getDistance_1_18(class Random& random);

MCAPI float getTunnelThickness_1_16(class Random& random);

MCAPI float getTunnelThickness_1_18(class Random& random);

MCAPI bool isDiggable_1_16(class Block const& block, class Block const& above);

MCAPI bool isDiggable_1_18(class Block const& block, class Block const&);

MCAPI float sampleFloatRange(struct FloatRange const& range, class Random& random);
// NOLINTEND

}; // namespace CaveFeatureUtils
