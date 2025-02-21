#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraThirdPersonBoomComponent {
public:
    // CameraThirdPersonBoomComponent inner types define
    enum class RotationSpace : uchar {
        Local = 0,
        World = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                           mStartingRadius;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                     mStartingOrientation;
    ::ll::TypedStorage<1, 1, ::CameraThirdPersonBoomComponent::RotationSpace> mRotSpace;
    // NOLINTEND
};
