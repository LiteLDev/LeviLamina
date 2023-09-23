#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockHitInformation {
public:
    // prevent constructor by default
    ScriptBlockHitInformation(ScriptBlockHitInformation const&);
    ScriptBlockHitInformation();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptBlockHitInformation@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptBlockHitInformation&&);

    // symbol: ??4ScriptBlockHitInformation@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptBlockHitInformation const&);

    // symbol: ??1ScriptBlockHitInformation@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockHitInformation();

    // symbol:
    // ?bind@ScriptBlockHitInformation@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptBlockHitInformation@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockHitInformation>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
