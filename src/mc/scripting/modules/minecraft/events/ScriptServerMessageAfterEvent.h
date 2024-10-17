#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptServerMessageAfterEvent {
public:
    // prevent constructor by default
    ScriptServerMessageAfterEvent& operator=(ScriptServerMessageAfterEvent const&);
    ScriptServerMessageAfterEvent(ScriptServerMessageAfterEvent const&);
    ScriptServerMessageAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptServerMessageAfterEvent(struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&);

    MCAPI ~ScriptServerMessageAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
