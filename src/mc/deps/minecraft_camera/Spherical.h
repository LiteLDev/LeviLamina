#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Spherical {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mRadius;
    ::ll::TypedStorage<4, 4, float> mAzimuth;
    ::ll::TypedStorage<4, 4, float> mPolarAngle;
    // NOLINTEND
};
