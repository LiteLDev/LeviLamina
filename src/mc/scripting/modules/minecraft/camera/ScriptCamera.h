#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
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
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
