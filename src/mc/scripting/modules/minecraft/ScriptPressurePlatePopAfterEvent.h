#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePopAfterEvent {
public:
    // prevent constructor by default
    ScriptPressurePlatePopAfterEvent& operator=(ScriptPressurePlatePopAfterEvent const&);
    ScriptPressurePlatePopAfterEvent(ScriptPressurePlatePopAfterEvent const&);
    ScriptPressurePlatePopAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPressurePlatePopAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPressurePlatePopAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
