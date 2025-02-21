#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
// clang-format on

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
