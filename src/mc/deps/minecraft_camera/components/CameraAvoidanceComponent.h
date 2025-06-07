#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CameraAvoidanceRay;
// clang-format on

struct CameraAvoidanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraAvoidanceRay>> mAvoidanceRaysHorizontal;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraAvoidanceRay>> mAvoidanceRaysVertical;
    ::ll::TypedStorage<4, 4, float>                                mRelaxDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float>                                mDistanceConstraintMin;
    ::ll::TypedStorage<4, 4, float>                                mRelaxDistanceVelocity;
    ::ll::TypedStorage<4, 4, float>                                mSmoothedDistanceConstraint;
    // NOLINTEND
};
