#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100 { struct CameraAvoidanceRay; }
// clang-format on

struct CameraAvoidanceComponent {
public:
    // CameraAvoidanceComponent inner types define
    using CameraAvoidanceRay = ::SharedTypes::v1_21_100::CameraAvoidanceRay;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysHorizontal;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysVertical;
    ::ll::TypedStorage<4, 4, float> mRelaxDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float> mDistanceConstraintMin;
    ::ll::TypedStorage<4, 4, float> mRelaxDistanceVelocity;
    ::ll::TypedStorage<4, 4, float> mSmoothedDistanceConstraint;
    // NOLINTEND
};
