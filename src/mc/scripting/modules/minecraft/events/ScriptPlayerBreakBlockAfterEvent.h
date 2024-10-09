#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerBreakBlockAfterEvent& operator=(ScriptPlayerBreakBlockAfterEvent const&);
    ScriptPlayerBreakBlockAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptPlayerBreakBlockAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCAPI ScriptPlayerBreakBlockAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
