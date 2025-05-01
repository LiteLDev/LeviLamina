#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Frustum.h"
#include "mc/deps/core/math/Vec3.h"

struct CameraAimAssistCachedFrustumComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>     mDirection;
    ::ll::TypedStorage<4, 12, ::Vec3>     mStart;
    ::ll::TypedStorage<4, 12, ::Vec3>     mFarCenter;
    ::ll::TypedStorage<4, 12, ::Vec3>     mLeft;
    ::ll::TypedStorage<4, 12, ::Vec3>     mUp;
    ::ll::TypedStorage<4, 4, float>       mLeftLength;
    ::ll::TypedStorage<4, 4, float>       mUpLength;
    ::ll::TypedStorage<4, 192, ::Frustum> mFrustum;
    // NOLINTEND
};
