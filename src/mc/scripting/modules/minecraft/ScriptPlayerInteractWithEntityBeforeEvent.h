#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityBeforeEvent& operator=(ScriptPlayerInteractWithEntityBeforeEvent const&);
    ScriptPlayerInteractWithEntityBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptPlayerInteractWithEntityBeforeEvent(struct ScriptModuleMinecraft::
                                                        ScriptPlayerInteractWithEntityBeforeEvent const&);

    // symbol:
    // ?bind@ScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerInteractWithEntityBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
