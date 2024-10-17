#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerLeaveBeforeEvent& operator=(ScriptPlayerLeaveBeforeEvent const&);
    ScriptPlayerLeaveBeforeEvent(ScriptPlayerLeaveBeforeEvent const&);
    ScriptPlayerLeaveBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerLeaveBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
