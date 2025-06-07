#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFadeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFixedBoomOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetFacingOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetLocationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetPositionOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetRotationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraTargetOptions; }
namespace Scripting { struct ClassBinding; }
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
    MCNAPI explicit ScriptCamera(::Player const& player);

    MCNAPI ::Scripting::Result_deprecated<void>
    cameraFade(::std::optional<::ScriptModuleMinecraft::ScriptCameraFadeOptions> fadeOptions) const;

    MCNAPI ::Scripting::Result_deprecated<void> clearCamera() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptCamera& operator=(::ScriptModuleMinecraft::ScriptCamera&&);

    MCNAPI ::Scripting::Result_deprecated<void> setCamera(
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

    MCNAPI ::Scripting::Result_deprecated<void> setCameraBeta(
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

    MCNAPI ::Scripting::Result_deprecated<void> setCamera_V160(
        ::std::string const&                                        cameraPreset,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptCameraSetFacingOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetPositionOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetRotationOptions,
            ::ScriptModuleMinecraft::ScriptCameraSetLocationOptions,
            ::ScriptModuleMinecraft::ScriptCameraTargetOptions,
            ::ScriptModuleMinecraft::ScriptCameraDefaultOptions,
            ::ScriptModuleMinecraft::ScriptCameraFixedBoomOptions>> options
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const& player);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
