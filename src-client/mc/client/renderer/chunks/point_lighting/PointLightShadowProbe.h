#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting {

class PointLightShadowProbe {
public:
    // PointLightShadowProbe inner types define
    enum class ProbeFace : uchar {
        PositiveX = 0,
        NegativeX = 1,
        PositiveY = 2,
        NegativeY = 3,
        PositiveZ = 4,
        NegativeZ = 5,
        Count     = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                      mLightWorldPosition;
    ::ll::TypedStorage<1, 1, ::PointLighting::PointLightShadowProbe::ProbeFace> mFaceToUpdate;
    ::ll::TypedStorage<4, 4, int>                                               mShadowProbeIndex;
    ::ll::TypedStorage<1, 1, bool>                                              mFresh;
    // NOLINTEND
};

} // namespace PointLighting
