#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeBeforeEvent {
public:
    // prevent constructor by default
    ScriptWorldInitializeBeforeEvent& operator=(ScriptWorldInitializeBeforeEvent const&);
    ScriptWorldInitializeBeforeEvent(ScriptWorldInitializeBeforeEvent const&);
    ScriptWorldInitializeBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent&&);

    MCAPI ~ScriptWorldInitializeBeforeEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
