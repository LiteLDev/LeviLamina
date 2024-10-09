#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

namespace ScriptModuleMinecraft {

class ScriptPlayerInputPermissions {
public:
    // prevent constructor by default
    ScriptPlayerInputPermissions& operator=(ScriptPlayerInputPermissions const&);
    ScriptPlayerInputPermissions(ScriptPlayerInputPermissions const&);
    ScriptPlayerInputPermissions();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerInputPermissions> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<void> _setPermissionCategory(::ClientInputLockCategory category, bool isEnabled);

    MCAPI static void _makeCategoryPropertyBinding(
        class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerInputPermissions>& classBuilder,
        ::ClientInputLockCategory                                                                        category
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
