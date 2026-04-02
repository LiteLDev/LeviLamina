#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct PointLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mIntensity;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mColor;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mWorldPosition;
    ::ll::TypedStorage<1, 1, bool>         mIsLarge;
    // NOLINTEND
};

} // namespace mce
