#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockRaycastOptions {
public:
    // prevent constructor by default
    ScriptBlockRaycastOptions();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockRaycastOptions@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptBlockRaycastOptions(struct ScriptModuleMinecraft::ScriptBlockRaycastOptions const&);

    // symbol: ??4ScriptBlockRaycastOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockRaycastOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockRaycastOptions&&);

    // symbol: ??4ScriptBlockRaycastOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockRaycastOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockRaycastOptions const&);

    // symbol: ??1ScriptBlockRaycastOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockRaycastOptions();

    // symbol:
    // ?bind@ScriptBlockRaycastOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions>
    bind();

    // symbol:
    // ?bindV010@ScriptBlockRaycastOptions@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
