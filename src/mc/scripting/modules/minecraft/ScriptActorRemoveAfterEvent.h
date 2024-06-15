#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveAfterEvent {
public:
    // prevent constructor by default
    ScriptActorRemoveAfterEvent& operator=(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&&);

    // symbol: ??1ScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorRemoveAfterEvent();

    // symbol:
    // ?bind@ScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
