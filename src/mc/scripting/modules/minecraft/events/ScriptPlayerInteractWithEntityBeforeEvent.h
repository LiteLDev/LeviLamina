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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
