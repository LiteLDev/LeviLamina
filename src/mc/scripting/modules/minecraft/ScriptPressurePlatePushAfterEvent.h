#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePushAfterEvent {
public:
    // prevent constructor by default
    ScriptPressurePlatePushAfterEvent& operator=(ScriptPressurePlatePushAfterEvent const&);
    ScriptPressurePlatePushAfterEvent(ScriptPressurePlatePushAfterEvent const&);
    ScriptPressurePlatePushAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
