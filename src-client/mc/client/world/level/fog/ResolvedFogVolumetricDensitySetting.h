#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResolvedFogVolumetricDensitySetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMaxDensity;
    ::ll::TypedStorage<4, 4, float> mMaxDensityHeight;
    ::ll::TypedStorage<4, 4, float> mZeroDensityHeight;
    // NOLINTEND
};
