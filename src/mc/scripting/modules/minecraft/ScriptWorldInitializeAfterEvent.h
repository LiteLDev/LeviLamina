#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEvent {
public:
    // prevent constructor by default
    ScriptWorldInitializeAfterEvent& operator=(ScriptWorldInitializeAfterEvent const&);
    ScriptWorldInitializeAfterEvent(ScriptWorldInitializeAfterEvent const&);
    ScriptWorldInitializeAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptWorldInitializeAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bind();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
