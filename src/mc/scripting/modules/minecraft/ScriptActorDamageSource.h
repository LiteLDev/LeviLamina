#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDamageSource {
public:
    // prevent constructor by default
    ScriptActorDamageSource();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptActorDamageSource@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptActorDamageSource(struct ScriptModuleMinecraft::ScriptActorDamageSource const&);

    // symbol: ??4ScriptActorDamageSource@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorDamageSource&
    operator=(struct ScriptModuleMinecraft::ScriptActorDamageSource&&);

    // symbol: ??4ScriptActorDamageSource@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorDamageSource&
    operator=(struct ScriptModuleMinecraft::ScriptActorDamageSource const&);

    // symbol: ??1ScriptActorDamageSource@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorDamageSource();

    // symbol:
    // ?bind@ScriptActorDamageSource@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptActorDamageSource@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorDamageSource> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
