#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTeleportOptions {
public:
    // prevent constructor by default
    ScriptTeleportOptions();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptTeleportOptions@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptTeleportOptions(struct ScriptModuleMinecraft::ScriptTeleportOptions const&);

    // symbol: ??4ScriptTeleportOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptTeleportOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTeleportOptions&&);

    // symbol: ??4ScriptTeleportOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptTeleportOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTeleportOptions const&);

    // symbol: ??1ScriptTeleportOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptTeleportOptions();

    // symbol:
    // ?bind@ScriptTeleportOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptTeleportOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptTeleportOptions> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
