#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting {

struct AnalyticLightResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mShadowProbeIndex;
    ::ll::TypedStorage<4, 4, float> mIntensityScalar;
    // NOLINTEND
};

} // namespace PointLighting
