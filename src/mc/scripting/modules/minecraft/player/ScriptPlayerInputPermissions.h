#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerInputPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6d3efa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputPermissions& operator=(ScriptPlayerInputPermissions const&);
    ScriptPlayerInputPermissions(ScriptPlayerInputPermissions const&);
    ScriptPlayerInputPermissions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<bool, ::Scripting::Error> _getPermissionCategoryV1(::ClientInputLockCategory category
    ) const;

    MCAPI ::Scripting::Result<bool, ::Scripting::Error> _getPermissionCategoryV2(::ClientInputLockCategory category
    ) const;

    MCAPI ::Scripting::Result<void> _setPermissionCategoryV1(::ClientInputLockCategory category, bool isEnabled);

    MCAPI ::Scripting::Result<void> _setPermissionCategoryV2(::ClientInputLockCategory category, bool isEnabled);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerInputPermissions&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInputPermissions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
