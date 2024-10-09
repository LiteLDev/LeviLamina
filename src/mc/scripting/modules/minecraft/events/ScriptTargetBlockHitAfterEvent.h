#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTargetBlockHitAfterEvent {
public:
    // prevent constructor by default
    ScriptTargetBlockHitAfterEvent& operator=(ScriptTargetBlockHitAfterEvent const&);
    ScriptTargetBlockHitAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptTargetBlockHitAfterEvent(struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
