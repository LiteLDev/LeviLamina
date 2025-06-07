#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAdjustedPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mAdjustedPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mAttachOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mLookAtPosition;
    // NOLINTEND
};
