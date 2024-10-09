#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEvent {
public:
    // prevent constructor by default
    ScriptLeverActionAfterEvent& operator=(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent(ScriptLeverActionAfterEvent const&);
    ScriptLeverActionAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
