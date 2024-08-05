#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerJoinAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerJoinAfterEvent& operator=(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptPlayerJoinAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);

    MCAPI ~ScriptPlayerJoinAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>
    bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
