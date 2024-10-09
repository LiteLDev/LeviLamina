#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInputPermissionCategoryChangeAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerInputPermissionCategoryChangeAfterEvent&
    operator=(ScriptPlayerInputPermissionCategoryChangeAfterEvent const&);
    ScriptPlayerInputPermissionCategoryChangeAfterEvent(ScriptPlayerInputPermissionCategoryChangeAfterEvent const&);
    ScriptPlayerInputPermissionCategoryChangeAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
