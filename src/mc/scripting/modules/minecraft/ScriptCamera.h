#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptCameraDefaultOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraFadeOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetFacingOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetLocationOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetPositionOptions; }
namespace ScriptModuleMinecraft { struct ScriptCameraSetRotationOptions; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCamera {
public:
    // prevent constructor by default
    ScriptCamera& operator=(ScriptCamera const&);
    ScriptCamera(ScriptCamera const&);
    ScriptCamera();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptCamera(class Player const&);

    MCAPI class Scripting::Result<void>
        cameraFade(std::optional<struct ScriptModuleMinecraft::ScriptCameraFadeOptions>) const;

    MCAPI class Scripting::Result<void> clearCamera() const;

    MCAPI class Scripting::Result<void>
    setCamera(std::string const&, std::optional<std::optional<std::variant<struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions, struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions, struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions, struct ScriptModuleMinecraft::ScriptCameraSetLocationOptions, struct ScriptModuleMinecraft::ScriptCameraDefaultOptions>>>)
        const;

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptCamera> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
