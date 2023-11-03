#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent& operator=(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerDimensionChangeAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
