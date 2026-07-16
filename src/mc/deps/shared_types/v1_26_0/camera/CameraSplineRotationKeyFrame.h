#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"

namespace SharedTypes::v1_26_0 {

struct CameraSplineRotationKeyFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                       mRotation;
    ::ll::TypedStorage<4, 4, float>                         mTimeSeconds;
    ::ll::TypedStorage<4, 8, ::std::optional<::EasingType>> mEasingType;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
