#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PotentSulfurUtils {

struct EruptionFactors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mIntervalFactor;
    ::ll::TypedStorage<4, 4, float> mDurationFactor;
    // NOLINTEND
};

} // namespace PotentSulfurUtils
