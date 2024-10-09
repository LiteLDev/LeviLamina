#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptInputPermissionCategory {
public:
    // prevent constructor by default
    ScriptInputPermissionCategory& operator=(ScriptInputPermissionCategory const&);
    ScriptInputPermissionCategory(ScriptInputPermissionCategory const&);
    ScriptInputPermissionCategory();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<::ClientInputLockCategory, ::ClientInputLockCategory> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
