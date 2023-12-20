#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPistonActionBeforeEvent {
public:
    // prevent constructor by default
    ScriptPistonActionBeforeEvent& operator=(ScriptPistonActionBeforeEvent const&);
    ScriptPistonActionBeforeEvent(ScriptPistonActionBeforeEvent const&);
    ScriptPistonActionBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPistonActionBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPistonActionBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
