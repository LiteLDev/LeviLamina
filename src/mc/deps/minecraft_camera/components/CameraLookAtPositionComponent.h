#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraLookAtPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mTargetPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>  mTargetRotation;
    // NOLINTEND
};
