#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Vec2;
// clang-format on

struct CameraAimAssistSettingsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                        mViewFrustumAngle;
    ::ll::TypedStorage<4, 4, float>                         mViewFrustumDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssist::TargetMode> mTargetMode;
    ::ll::TypedStorage<8, 48, ::HashedString>               mPriorityPresetId;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistSettingsComponent& operator=(CameraAimAssistSettingsComponent const&);
    CameraAimAssistSettingsComponent(CameraAimAssistSettingsComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CameraAimAssistSettingsComponent& operator=(::CameraAimAssistSettingsComponent&&);

    MCAPI ~CameraAimAssistSettingsComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
