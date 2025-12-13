#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

struct CameraAimAssistSettingsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                        mViewFrustumAngle;
    ::ll::TypedStorage<4, 4, float>                         mViewFrustumDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssist::TargetMode> mTargetMode;
    ::ll::TypedStorage<8, 48, ::HashedString>               mPriorityPresetId;
    ::ll::TypedStorage<1, 1, bool>                          mShowDebugRender;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistSettingsComponent& operator=(CameraAimAssistSettingsComponent const&);
    CameraAimAssistSettingsComponent(CameraAimAssistSettingsComponent const&);
    CameraAimAssistSettingsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraAimAssistSettingsComponent& operator=(::CameraAimAssistSettingsComponent&&);

    MCNAPI ~CameraAimAssistSettingsComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
