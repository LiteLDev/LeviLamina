#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent {
public:
    // prevent constructor by default
    ScriptPistonActionAfterEvent& operator=(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPistonActionAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPistonActionAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
