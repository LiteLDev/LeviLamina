#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptStructurePlaceOptions {
public:
    // prevent constructor by default
    ScriptStructurePlaceOptions();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptStructurePlaceOptions@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptStructurePlaceOptions(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&&);

    // symbol: ??0ScriptStructurePlaceOptions@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptStructurePlaceOptions(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);

    // symbol: ??4ScriptStructurePlaceOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&
    operator=(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&&);

    // symbol: ??4ScriptStructurePlaceOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptStructurePlaceOptions&
    operator=(struct ScriptModuleMinecraft::ScriptStructurePlaceOptions const&);

    // symbol: ??1ScriptStructurePlaceOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptStructurePlaceOptions();

    // symbol:
    // ?bind@ScriptStructurePlaceOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptStructurePlaceOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptStructurePlaceOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
