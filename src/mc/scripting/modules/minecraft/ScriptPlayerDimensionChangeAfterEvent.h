#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent& operator=(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI
    ScriptPlayerDimensionChangeAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent const&);

    // symbol: ??4ScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent&&);

    // symbol:
    // ?bind@ScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
