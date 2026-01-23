#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100 { struct CameraAvoidanceRay; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraAvoidanceDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysHorizontal;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysVertical;
    ::ll::TypedStorage<4, 4, float> mRelaxDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float> mDistanceConstraintMin;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAvoidanceDefinition& operator=(CameraAvoidanceDefinition const&);
    CameraAvoidanceDefinition(CameraAvoidanceDefinition const&);
    CameraAvoidanceDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_100::CameraAvoidanceDefinition&
    operator=(::SharedTypes::v1_21_100::CameraAvoidanceDefinition&&);
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
