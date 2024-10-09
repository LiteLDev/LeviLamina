#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptGameRuleChangeAfterEvent {
public:
    // prevent constructor by default
    ScriptGameRuleChangeAfterEvent& operator=(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent(ScriptGameRuleChangeAfterEvent const&);
    ScriptGameRuleChangeAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptGameRuleChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
