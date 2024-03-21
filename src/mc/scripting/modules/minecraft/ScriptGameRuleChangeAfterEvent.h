#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptGameRuleChangeAfterEvent {
public:
    // prevent constructor by default
    ScriptGameRuleChangeAfterEvent& operator=(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptGameRuleChangeAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptGameRuleChangeAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
