#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct PointLightParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mIntensity;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mColor;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mWorldPosition;
    ::ll::TypedStorage<1, 1, bool>         mIsLarge;
    ::ll::TypedStorage<8, 8, uint64>       mHashCode;
    // NOLINTEND
};

} // namespace mce
