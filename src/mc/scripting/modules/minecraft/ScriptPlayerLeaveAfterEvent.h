#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerLeaveAfterEvent& operator=(ScriptPlayerLeaveAfterEvent const&);
    ScriptPlayerLeaveAfterEvent(ScriptPlayerLeaveAfterEvent const&);
    ScriptPlayerLeaveAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptPlayerLeaveAfterEvent();

    // symbol:
    // ?bind@ScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptPlayerLeaveAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
