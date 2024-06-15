#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ClientInputLockCategory.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptInputPermissionCategory {
public:
    // prevent constructor by default
    ScriptInputPermissionCategory& operator=(ScriptInputPermissionCategory const&);
    ScriptInputPermissionCategory(ScriptInputPermissionCategory const&);
    ScriptInputPermissionCategory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptInputPermissionCategory@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@W4ClientInputLockCategory@@W41@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<::ClientInputLockCategory, ::ClientInputLockCategory> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
