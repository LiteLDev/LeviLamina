#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct PointLightLODingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mLightUpdateFrequency;
    // NOLINTEND
};

} // namespace dragon::framerenderer
