#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

struct MovementInterpolatorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>  mRot;
    ::ll::TypedStorage<4, 4, float>   mHeadYaw;
    ::ll::TypedStorage<4, 4, int>     mPositionSteps;
    ::ll::TypedStorage<4, 4, int>     mRotationSteps;
    ::ll::TypedStorage<4, 4, int>     mHeadYawSteps;
    ::ll::TypedStorage<1, 1, bool>    mPlayerControlServerVehicle;
    // NOLINTEND
};
