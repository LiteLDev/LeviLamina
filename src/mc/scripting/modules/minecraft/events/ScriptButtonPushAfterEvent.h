#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptButtonPushAfterEvent {
public:
    // prevent constructor by default
    ScriptButtonPushAfterEvent& operator=(ScriptButtonPushAfterEvent const&);
    ScriptButtonPushAfterEvent(ScriptButtonPushAfterEvent const&);
    ScriptButtonPushAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
