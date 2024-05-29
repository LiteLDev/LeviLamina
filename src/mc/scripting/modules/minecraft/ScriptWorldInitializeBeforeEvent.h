#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeBeforeEvent {
public:
    // prevent constructor by default
    ScriptWorldInitializeBeforeEvent& operator=(ScriptWorldInitializeBeforeEvent const&);
    ScriptWorldInitializeBeforeEvent(ScriptWorldInitializeBeforeEvent const&);
    ScriptWorldInitializeBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptWorldInitializeBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent&&);

    // symbol: ??1ScriptWorldInitializeBeforeEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptWorldInitializeBeforeEvent();

    // symbol:
    // ?bind@ScriptWorldInitializeBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptWorldInitializeBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
