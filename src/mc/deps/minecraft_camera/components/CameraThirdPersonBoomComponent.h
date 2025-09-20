#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/RotationSpace.h"

struct CameraThirdPersonBoomComponent {
public:
    // CameraThirdPersonBoomComponent inner types define
    using RotationSpace = ::SharedTypes::v1_21_100::RotationSpace;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mStartingRadius;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                             mStartingOrientation;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_100::RotationSpace> mRotSpace;
    // NOLINTEND
};
