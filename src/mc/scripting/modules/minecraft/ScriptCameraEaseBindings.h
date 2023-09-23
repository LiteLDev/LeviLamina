#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EasingType.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptCameraEaseBindings {
public:
    // prevent constructor by default
    ScriptCameraEaseBindings& operator=(ScriptCameraEaseBindings const&);
    ScriptCameraEaseBindings(ScriptCameraEaseBindings const&);
    ScriptCameraEaseBindings();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptCameraEaseBindings@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EasingType@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::EasingType> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
