#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseAfterEvent {
public:
    // prevent constructor by default
    ScriptItemCompleteUseAfterEvent& operator=(ScriptItemCompleteUseAfterEvent const&);
    ScriptItemCompleteUseAfterEvent(ScriptItemCompleteUseAfterEvent const&);
    ScriptItemCompleteUseAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemCompleteUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
