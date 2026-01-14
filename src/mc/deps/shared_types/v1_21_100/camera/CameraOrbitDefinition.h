#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraOrbitDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAzimuthSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float> mPolarAngleSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float> mDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float> mPolarAngleMin;
    ::ll::TypedStorage<4, 4, float> mPolarAngleMax;
    ::ll::TypedStorage<4, 4, float> mYawAngleMin;
    ::ll::TypedStorage<4, 4, float> mYawAngleMax;
    ::ll::TypedStorage<4, 4, float> mRadius;
    ::ll::TypedStorage<1, 1, bool>  mInvertXInput;
    ::ll::TypedStorage<1, 1, bool>  mInvertYInput;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
