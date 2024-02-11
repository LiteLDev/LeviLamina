#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptTickEvent {
public:
    // prevent constructor by default
    ScriptTickEvent& operator=(ScriptTickEvent const&);
    ScriptTickEvent(ScriptTickEvent const&);
    ScriptTickEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bindV010@ScriptTickEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptTickEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptTickEvent> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
