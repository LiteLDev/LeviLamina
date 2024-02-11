#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEvent {
public:
    // prevent constructor by default
    ScriptWorldInitializeAfterEvent& operator=(ScriptWorldInitializeAfterEvent const&);
    ScriptWorldInitializeAfterEvent(ScriptWorldInitializeAfterEvent const&);
    ScriptWorldInitializeAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptWorldInitializeAfterEvent();

    // symbol:
    // ?bind@ScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptWorldInitializeAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
