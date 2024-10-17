#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveAfterEvent {
public:
    // prevent constructor by default
    ScriptActorRemoveAfterEvent& operator=(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&&);

    MCAPI ~ScriptActorRemoveAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
