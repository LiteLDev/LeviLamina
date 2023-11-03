#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTargetBlockHitAfterEvent {
public:
    // prevent constructor by default
    ScriptTargetBlockHitAfterEvent& operator=(ScriptTargetBlockHitAfterEvent const&);
    ScriptTargetBlockHitAfterEvent(ScriptTargetBlockHitAfterEvent const&);
    ScriptTargetBlockHitAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptTargetBlockHitAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptTargetBlockHitAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
