#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemReleaseUseAfterEvent {
public:
    // prevent constructor by default
    ScriptItemReleaseUseAfterEvent& operator=(ScriptItemReleaseUseAfterEvent const&);
    ScriptItemReleaseUseAfterEvent(ScriptItemReleaseUseAfterEvent const&);
    ScriptItemReleaseUseAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptItemReleaseUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemReleaseUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptItemReleaseUseAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemReleaseUseAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
