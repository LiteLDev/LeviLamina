#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraEaseOptions {
public:
    // prevent constructor by default
    ScriptCameraEaseOptions& operator=(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions();

public:
    // NOLINTBEGIN
    // symbol: ??8ScriptCameraEaseOptions@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraEaseOptions const&) const;

    // symbol:
    // ?bind@ScriptCameraEaseOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraEaseOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraEaseOptions> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
