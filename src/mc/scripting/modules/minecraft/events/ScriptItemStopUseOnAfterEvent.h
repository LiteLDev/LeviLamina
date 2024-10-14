#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseOnAfterEvent {
public:
    // prevent constructor by default
    ScriptItemStopUseOnAfterEvent& operator=(ScriptItemStopUseOnAfterEvent const&);
    ScriptItemStopUseOnAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemStopUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>
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
