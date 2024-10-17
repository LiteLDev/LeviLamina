#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct Parameter; }
namespace ClimateUtils { struct TargetSpace; }
// clang-format on

namespace ClimateUtils {
// NOLINTBEGIN
MCAPI int64 squareDistance(
    std::array<struct ClimateUtils::Parameter, 7> const& parameterSpace,
    struct ClimateUtils::TargetSpace const&              target
);
// NOLINTEND

}; // namespace ClimateUtils
