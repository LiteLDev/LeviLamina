#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetRotationOptions {
public:
    // prevent constructor by default
    ScriptCameraSetRotationOptions(ScriptCameraSetRotationOptions const&);
    ScriptCameraSetRotationOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptCameraSetRotationOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions&&);

    // symbol: ??4ScriptCameraSetRotationOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions const&);

    // symbol: ??8ScriptCameraSetRotationOptions@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions const&) const;

    // symbol:
    // ?bind@ScriptCameraSetRotationOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraSetRotationOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
