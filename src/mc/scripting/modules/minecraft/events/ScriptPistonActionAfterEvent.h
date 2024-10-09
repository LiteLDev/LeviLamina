#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent {
public:
    // prevent constructor by default
    ScriptPistonActionAfterEvent& operator=(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPistonActionAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
