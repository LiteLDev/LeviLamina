#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mEntityOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec2>  mViewOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mCalculatedOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mCaclulatedViewOffset;
    // NOLINTEND
};
