#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
class WeakEntityRef;
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFadeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFixedBoomOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetFacingOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetLocationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetPositionOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetRotationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraTargetOptions; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCamera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf4cfb1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCamera& operator=(ScriptCamera const&);
    ScriptCamera(ScriptCamera const&);
    ScriptCamera();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptCamera(::Player const& player);

    MCAPI explicit ScriptCamera(::WeakEntityRef const& playerRef);

    MCAPI ::Scripting::Result<void>
    cameraFade(::std::optional<::ScriptModuleMinecraft::ScriptCameraFadeOptions> fadeOptions) const;

    MCAPI ::Scripting::Result<void> clearCamera() const;

    MCAPI ::Scripting::Result<void> setCamera(
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

    MCAPI ::Scripting::Result<void> setCameraBeta(
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

    MCAPI ::Scripting::Result<void> setCamera_V160(
        ::std::string const&                                      cameraPreset,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptCameraSetFacingOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetPositionOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetRotationOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetLocationOptions,
            ::ScriptModuleMinecraft::ScriptCameraDefaultOptions>> options
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptCamera> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Player const& player);

    MCFOLD void* $ctor(::WeakEntityRef const& playerRef);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
