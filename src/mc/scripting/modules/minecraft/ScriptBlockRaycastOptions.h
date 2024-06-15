#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockRaycastOptions {
public:
    // prevent constructor by default
    ScriptBlockRaycastOptions& operator=(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptBlockRaycastOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockRaycastOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockRaycastOptions&&);

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
