#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerLeaveAfterEvent& operator=(ScriptPlayerLeaveAfterEvent const&);
    ScriptPlayerLeaveAfterEvent(ScriptPlayerLeaveAfterEvent const&);
    ScriptPlayerLeaveAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&&);

    MCAPI ~ScriptPlayerLeaveAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>
    bind();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
