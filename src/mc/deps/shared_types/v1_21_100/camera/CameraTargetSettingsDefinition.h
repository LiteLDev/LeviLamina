#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraTargetSettingsDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mSnapToTarget;
    ::ll::TypedStorage<1, 1, bool>                     mContinueTargeting;
    ::ll::TypedStorage<4, 4, float>                    mRotationSpeed;
    ::ll::TypedStorage<4, 4, float>                    mTrackingRadius;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mHorizontalRotationLimit;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mVerticalRotationLimit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setHorizontalRotationLimit(::std::optional<::std::array<float, 2>> opt);

    MCAPI void setVerticalRotationLimit(::std::optional<::std::array<float, 2>> opt);
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
