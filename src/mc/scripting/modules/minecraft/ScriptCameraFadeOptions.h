#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeOptions {
public:
    // prevent constructor by default
    ScriptCameraFadeOptions(ScriptCameraFadeOptions const&);
    ScriptCameraFadeOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptCameraFadeOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraFadeOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraFadeOptions&&);

    // symbol: ??4ScriptCameraFadeOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraFadeOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraFadeOptions const&);

    // symbol: ??1ScriptCameraFadeOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptCameraFadeOptions();

    // symbol:
    // ?bind@ScriptCameraFadeOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraFadeOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraFadeOptions> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
