#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/Spherical.h"

struct CameraOrbitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mAzimuthSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float>        mPolarAngleSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float>        mDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float>        mPolarAngleMin;
    ::ll::TypedStorage<4, 4, float>        mPolarAngleMax;
    ::ll::TypedStorage<4, 4, float>        mYawAngleMin;
    ::ll::TypedStorage<4, 4, float>        mYawAngleMax;
    ::ll::TypedStorage<4, 4, float>        mRadius;
    ::ll::TypedStorage<1, 1, bool>         mInvertXInput;
    ::ll::TypedStorage<1, 1, bool>         mInvertYInput;
    ::ll::TypedStorage<4, 12, ::Spherical> mCurrentSpherical;
    ::ll::TypedStorage<4, 12, ::Spherical> mIdealSpherical;
    ::ll::TypedStorage<4, 4, float>        mAzimuthVelocity;
    ::ll::TypedStorage<4, 4, float>        mPolarAngleVelocity;
    ::ll::TypedStorage<4, 4, float>        mDistanceVelocity;
    ::ll::TypedStorage<4, 4, float>        mDistanceConstraint;
    // NOLINTEND
};
