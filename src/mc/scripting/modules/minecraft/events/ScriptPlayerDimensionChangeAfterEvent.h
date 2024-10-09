#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent& operator=(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptPlayerDimensionChangeAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
