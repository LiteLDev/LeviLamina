#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerAimAssistSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPresetId;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                       mViewAngle;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                         mDistance;
    ::ll::TypedStorage<1, 2, ::std::optional<::CameraAimAssist::TargetMode>> mTargetMode;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerAimAssistSettings(ScriptPlayerAimAssistSettings const&);
    ScriptPlayerAimAssistSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&
    operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&
    operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings const&);

    MCAPI ~ScriptPlayerAimAssistSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
