#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFadeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFixedBoomOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFovOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetFacingOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetLocationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetPositionOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetRotationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraTargetOptions; }
namespace ScriptModuleMinecraft { struct ScriptCatmullRomSpline; }
namespace ScriptModuleMinecraft { struct ScriptEaseOptions; }
namespace ScriptModuleMinecraft { struct ScriptLinearSpline; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCamera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCamera& operator=(ScriptCamera const&);
    ScriptCamera(ScriptCamera const&);
    ScriptCamera();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<void>
    cameraFade(::std::optional<::ScriptModuleMinecraft::ScriptCameraFadeOptions> fadeOptions) const;

    MCAPI ::Scripting::Result_deprecated<void> clearCamera() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptCamera& operator=(::ScriptModuleMinecraft::ScriptCamera&&);

    MCAPI ::Scripting::Result_deprecated<void> playAnimation(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCatmullRomSpline>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLinearSpline>> const& spline,
        ::ScriptModuleMinecraft::ScriptAnimationOptions                                               animationOptions
    );

    MCAPI ::Scripting::Result_deprecated<void> setCamera(
        ::std::string const&                                        cameraPreset,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptCameraSetFacingOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetPositionOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetRotationOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetLocationOptions,
            ::ScriptModuleMinecraft::ScriptCameraDefaultOptions,
            ::ScriptModuleMinecraft::ScriptCameraTargetOptions,
            ::ScriptModuleMinecraft::ScriptCameraFixedBoomOptions>> options
    ) const;

    MCAPI ::Scripting::Result_deprecated<void>
    setCameraWithEase(::std::string const& cameraPreset, ::ScriptModuleMinecraft::ScriptEaseOptions easeOptions);

    MCAPI ::Scripting::Result_deprecated<void> setCamera_V1(
        ::std::string const&                                        cameraPreset,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptCameraSetFacingOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetPositionOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetRotationOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetLocationOptions,
            ::ScriptModuleMinecraft::ScriptCameraDefaultOptions,
            ::ScriptModuleMinecraft::ScriptCameraTargetOptions,
            ::ScriptModuleMinecraft::ScriptCameraFixedBoomOptions>> options
    ) const;

    MCAPI ::Scripting::Result_deprecated<void> setCamera_V2(
        ::std::string const&                                        cameraPreset,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptCameraSetFacingOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetPositionOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetRotationOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetLocationOptions,
            ::ScriptModuleMinecraft::ScriptCameraTargetOptions,
            ::ScriptModuleMinecraft::ScriptCameraFixedBoomOptions>> options
    ) const;

    MCAPI ::Scripting::Result_deprecated<void> setDefaultCamera(
        ::std::string const&                                        cameraPreset,
        ::std::optional<::ScriptModuleMinecraft::ScriptEaseOptions> easeOptions
    );

    MCAPI ::Scripting::Result_deprecated<void>
    setFov(::std::optional<::ScriptModuleMinecraft::ScriptCameraFovOptions> fovOptions) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
