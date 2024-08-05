#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ClientInputLockCategory.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

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
    MCAPI class Scripting::Result<void> _setPermissionCategory(::ClientInputLockCategory, bool);

    MCAPI static void _makeCategoryPropertyBinding(
        class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerInputPermissions>&,
        ::ClientInputLockCategory
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
