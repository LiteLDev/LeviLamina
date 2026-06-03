#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAvoidanceSystem {

struct AvoidanceCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mTargetPos;
    ::ll::TypedStorage<4, 4, float>        mDistanceConstraint;
    ::ll::TypedStorage<4, 4, float>        mDistanceToTarget;
    // NOLINTEND
};

} // namespace CameraAvoidanceSystem
