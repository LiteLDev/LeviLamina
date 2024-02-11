#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHitBlockAfterEvent& operator=(ScriptActorHitBlockAfterEvent const&);
    ScriptActorHitBlockAfterEvent(ScriptActorHitBlockAfterEvent const&);
    ScriptActorHitBlockAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptActorHitBlockAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorHitBlockAfterEvent();

    // symbol:
    // ?bind@ScriptActorHitBlockAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptActorHitBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
