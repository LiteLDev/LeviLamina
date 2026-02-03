#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerInputPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputPermissions& operator=(ScriptPlayerInputPermissions const&);
    ScriptPlayerInputPermissions(ScriptPlayerInputPermissions const&);
    ScriptPlayerInputPermissions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<bool> _getPermissionCategoryV1(::ClientInputLockCategory category) const;

    MCAPI ::Scripting::Result_deprecated<bool> _getPermissionCategoryV2(::ClientInputLockCategory category) const;

    MCAPI ::Scripting::Result_deprecated<void>
    _setPermissionCategoryV1(::ClientInputLockCategory category, bool isEnabled);

    MCAPI ::Scripting::Result_deprecated<void>
    _setPermissionCategoryV2(::ClientInputLockCategory category, bool isEnabled);

    MCFOLD ::ScriptModuleMinecraft::ScriptPlayerInputPermissions&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInputPermissions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
