#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCommandPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<5>>>  mPresetId;
    ::ll::TypedStorage<1, 2, ::std::optional<::CameraAimAssist::TargetMode>> mTargetMode;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mAngle;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCommandPresetDefinition& operator=(CameraAimAssistCommandPresetDefinition const&);
    CameraAimAssistCommandPresetDefinition(CameraAimAssistCommandPresetDefinition const&);
    CameraAimAssistCommandPresetDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCommandPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCommandPresetDefinition&&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCommandPresetDefinition const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
