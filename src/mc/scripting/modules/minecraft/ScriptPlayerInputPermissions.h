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
    // symbol:
    // ?bind@ScriptPlayerInputPermissions@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptPlayerInputPermissions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerInputPermissions> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_setPermissionCategory@ScriptPlayerInputPermissions@ScriptModuleMinecraft@@AEAA?AV?$Result@X$$V@Scripting@@W4ClientInputLockCategory@@_N@Z
    MCAPI class Scripting::Result<void> _setPermissionCategory(::ClientInputLockCategory, bool);

    // symbol:
    // ?_makeCategoryPropertyBinding@ScriptPlayerInputPermissions@ScriptModuleMinecraft@@CAXAEAV?$ClassBindingBuilder@VScriptPlayerInputPermissions@ScriptModuleMinecraft@@@Scripting@@W4ClientInputLockCategory@@@Z
    MCAPI static void _makeCategoryPropertyBinding(
        class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayerInputPermissions>&,
        ::ClientInputLockCategory
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
