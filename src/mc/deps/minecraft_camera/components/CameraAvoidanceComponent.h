#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100 { struct CameraAvoidanceRay; }
// clang-format on

namespace MinecraftCamera {

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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CameraAvoidanceComponent& operator=(CameraAvoidanceComponent const&);
    CameraAvoidanceComponent(CameraAvoidanceComponent const&);
    CameraAvoidanceComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::MinecraftCamera::CameraAvoidanceComponent& operator=(::MinecraftCamera::CameraAvoidanceComponent&&);
#endif
    // NOLINTEND
};

} // namespace MinecraftCamera
