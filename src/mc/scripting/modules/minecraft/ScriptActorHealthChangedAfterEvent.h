#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHealthChangedAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHealthChangedAfterEvent& operator=(ScriptActorHealthChangedAfterEvent const&);
    ScriptActorHealthChangedAfterEvent(ScriptActorHealthChangedAfterEvent const&);
    ScriptActorHealthChangedAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent&&);

    // symbol: ??1ScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorHealthChangedAfterEvent();

    // symbol:
    // ?bind@ScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
