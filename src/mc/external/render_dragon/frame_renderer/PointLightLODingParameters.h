#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct PointLightLODingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3b3f2e;
    ::ll::UntypedStorage<4, 4>  mUnkeb3693;
    ::ll::UntypedStorage<4, 4>  mUnka09030;
    ::ll::UntypedStorage<4, 4>  mUnk6364dd;
    ::ll::UntypedStorage<4, 4>  mUnkd263d9;
    ::ll::UntypedStorage<4, 4>  mUnkedc012;
    ::ll::UntypedStorage<4, 4>  mUnk41e959;
    ::ll::UntypedStorage<1, 1>  mUnk1efa73;
    ::ll::UntypedStorage<1, 1>  mUnk68ed88;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightLODingParameters& operator=(PointLightLODingParameters const&);
    PointLightLODingParameters(PointLightLODingParameters const&);
    PointLightLODingParameters();
};

} // namespace dragon::framerenderer
