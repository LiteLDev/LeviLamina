#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct DynamicRenderOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mNormalizedOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mPreviousOffset;
    ::ll::TypedStorage<4, 4, float> mInterpolationSpeed;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentPosDelta;
    // NOLINTEND

};
