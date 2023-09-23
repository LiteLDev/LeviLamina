#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

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
    // ?bind@ScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
