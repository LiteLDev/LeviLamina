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
    // symbol: ??0ScriptCamera@ScriptModuleMinecraft@@QEAA@AEBVPlayer@@@Z
    MCAPI explicit ScriptCamera(class Player const&);

    // symbol:
    // ?cameraFade@ScriptCamera@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@V?$optional@UScriptCameraFadeOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void>
        cameraFade(std::optional<struct ScriptModuleMinecraft::ScriptCameraFadeOptions>) const;

    // symbol: ?clearCamera@ScriptCamera@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> clearCamera() const;

    // symbol:
    // ?setCamera@ScriptCamera@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@V?$optional@V?$variant@UScriptCameraSetFacingOptions@ScriptModuleMinecraft@@UScriptCameraSetPositionOptions@2@UScriptCameraSetRotationOptions@2@UScriptCameraSetLocationOptions@2@UScriptCameraDefaultOptions@2@@std@@@std@@@6@@Z
    MCAPI class Scripting::Result<void>
    setCamera(std::string const&, std::optional<std::optional<std::variant<struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions, struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions, struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions, struct ScriptModuleMinecraft::ScriptCameraSetLocationOptions, struct ScriptModuleMinecraft::ScriptCameraDefaultOptions>>>)
        const;

    // symbol:
    // ?bind@ScriptCamera@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptCamera@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptCamera> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
