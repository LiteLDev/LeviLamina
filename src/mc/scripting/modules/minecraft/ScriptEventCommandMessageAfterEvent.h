#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEventCommandMessageAfterEvent {
public:
    // prevent constructor by default
    ScriptEventCommandMessageAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptEventCommandMessageAfterEvent(struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI ScriptEventCommandMessageAfterEvent(struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);

    MCAPI ~ScriptEventCommandMessageAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
