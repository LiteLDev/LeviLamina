#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEvent {
public:
    // prevent constructor by default
    ScriptLeverActionAfterEvent& operator=(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptLeverActionAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptLeverActionAfterEvent();

    // symbol:
    // ?bind@ScriptLeverActionAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptLeverActionAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
