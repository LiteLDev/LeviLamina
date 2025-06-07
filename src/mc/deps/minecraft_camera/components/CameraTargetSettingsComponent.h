#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

struct CameraTargetSettingsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mSnapToTarget;
    ::ll::TypedStorage<1, 1, bool>                     mContinueTargeting;
    ::ll::TypedStorage<4, 4, float>                    mRotationSpeed;
    ::ll::TypedStorage<4, 4, float>                    mTrackingRadius;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mHorizontalRotationLimit;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mVerticalRotationLimit;
    ::ll::TypedStorage<4, 8, ::Vec2>                   mCurrentEulerOrientation;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mTargetDirectionToLook;
    // NOLINTEND
};
