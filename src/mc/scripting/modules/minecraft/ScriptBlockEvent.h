#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockEvent {
public:
    // prevent constructor by default
    ScriptBlockEvent(ScriptBlockEvent const&);
    ScriptBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptBlockEvent& operator=(struct ScriptModuleMinecraft::ScriptBlockEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockEvent const&);

    MCAPI ~ScriptBlockEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
