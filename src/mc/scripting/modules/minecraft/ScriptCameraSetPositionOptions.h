#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetPositionOptions {
public:
    // prevent constructor by default
    ScriptCameraSetPositionOptions(ScriptCameraSetPositionOptions const&);
    ScriptCameraSetPositionOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptCameraSetPositionOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions&&);

    // symbol: ??4ScriptCameraSetPositionOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions const&);

    // symbol: ??8ScriptCameraSetPositionOptions@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions const&) const;

    // symbol:
    // ?bind@ScriptCameraSetPositionOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraSetPositionOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
