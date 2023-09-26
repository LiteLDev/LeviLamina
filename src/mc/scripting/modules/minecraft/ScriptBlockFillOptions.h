#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockFillOptions {
public:
    // prevent constructor by default
    ScriptBlockFillOptions(ScriptBlockFillOptions const&);
    ScriptBlockFillOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptBlockFillOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockFillOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockFillOptions&&);

    // symbol: ??4ScriptBlockFillOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockFillOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockFillOptions const&);

    // symbol: ??1ScriptBlockFillOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockFillOptions();

    // symbol:
    // ?bind@ScriptBlockFillOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptBlockFillOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockFillOptions> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
