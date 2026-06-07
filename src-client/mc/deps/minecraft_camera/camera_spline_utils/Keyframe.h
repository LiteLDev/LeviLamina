#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

namespace CameraSplineUtils {

struct Keyframe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mValue;
    ::ll::TypedStorage<4, 4, float>        mTime;
    ::ll::TypedStorage<4, 4, ::EasingType> mEasingFunc;
    // NOLINTEND
};

} // namespace CameraSplineUtils
