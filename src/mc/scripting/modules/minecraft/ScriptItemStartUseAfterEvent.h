#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseAfterEvent {
public:
    // prevent constructor by default
    ScriptItemStartUseAfterEvent& operator=(ScriptItemStartUseAfterEvent const&);
    ScriptItemStartUseAfterEvent(ScriptItemStartUseAfterEvent const&);
    ScriptItemStartUseAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemStartUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
