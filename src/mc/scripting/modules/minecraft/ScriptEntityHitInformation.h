#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityHitInformation {
public:
    // prevent constructor by default
    ScriptEntityHitInformation(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptEntityHitInformation@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptEntityHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptEntityHitInformation&&);

    // symbol: ??4ScriptEntityHitInformation@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptEntityHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptEntityHitInformation const&);

    // symbol: ??1ScriptEntityHitInformation@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptEntityHitInformation();

    // symbol:
    // ?bind@ScriptEntityHitInformation@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptEntityHitInformation@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityHitInformation>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
