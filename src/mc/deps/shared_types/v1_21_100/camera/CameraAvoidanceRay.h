#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100 {

struct CameraAvoidanceRay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAngleRadians;
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
