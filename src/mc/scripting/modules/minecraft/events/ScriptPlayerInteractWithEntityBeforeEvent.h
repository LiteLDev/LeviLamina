#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityBeforeEvent& operator=(ScriptPlayerInteractWithEntityBeforeEvent const&);
    ScriptPlayerInteractWithEntityBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptPlayerInteractWithEntityBeforeEvent(struct ScriptModuleMinecraft::
                                                        ScriptPlayerInteractWithEntityBeforeEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
