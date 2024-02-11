#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHealthChangedAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHealthChangedAfterEvent& operator=(ScriptActorHealthChangedAfterEvent const&);
    ScriptActorHealthChangedAfterEvent(ScriptActorHealthChangedAfterEvent const&);
    ScriptActorHealthChangedAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorHealthChangedAfterEvent();

    // symbol:
    // ?bind@ScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptActorHealthChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
