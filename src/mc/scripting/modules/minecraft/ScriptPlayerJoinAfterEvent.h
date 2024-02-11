#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerJoinAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerJoinAfterEvent& operator=(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptPlayerJoinAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);

    // symbol: ??1ScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptPlayerJoinAfterEvent();

    // symbol:
    // ?bind@ScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerJoinAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
