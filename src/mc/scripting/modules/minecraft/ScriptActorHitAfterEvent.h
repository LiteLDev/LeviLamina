#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHitAfterEvent& operator=(ScriptActorHitAfterEvent const&);
    ScriptActorHitAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptActorHitAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptActorHitAfterEvent(struct ScriptModuleMinecraft::ScriptActorHitAfterEvent const&);

    // symbol: ??4ScriptActorHitAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorHitAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHitAfterEvent&&);

    // symbol: ??1ScriptActorHitAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorHitAfterEvent();

    // symbol:
    // ?bindV010@ScriptActorHitAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptActorHitAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptActorHitAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
