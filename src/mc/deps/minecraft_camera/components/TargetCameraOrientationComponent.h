#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetCameraOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::qua<float>> mTargetCameraOrientation;
    // NOLINTEND
};
