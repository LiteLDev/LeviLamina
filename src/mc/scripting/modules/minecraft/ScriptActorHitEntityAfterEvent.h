#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitEntityAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHitEntityAfterEvent& operator=(ScriptActorHitEntityAfterEvent const&);
    ScriptActorHitEntityAfterEvent(ScriptActorHitEntityAfterEvent const&);
    ScriptActorHitEntityAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorHitEntityAfterEvent();

    // symbol:
    // ?bind@ScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
