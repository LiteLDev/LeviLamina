#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveAfterEvent {
public:
    // prevent constructor by default
    ScriptActorRemoveAfterEvent& operator=(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorRemoveAfterEvent();

    // symbol:
    // ?bind@ScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorRemoveAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
