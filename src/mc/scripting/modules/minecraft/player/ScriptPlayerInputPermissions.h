#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    MCNAPI ::Scripting::Result_deprecated<bool> _getPermissionCategoryV1(::ClientInputLockCategory category) const;

    MCNAPI ::Scripting::Result_deprecated<bool> _getPermissionCategoryV2(::ClientInputLockCategory category) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    _setPermissionCategoryV1(::ClientInputLockCategory category, bool isEnabled);

    MCNAPI ::Scripting::Result_deprecated<void>
    _setPermissionCategoryV2(::ClientInputLockCategory category, bool isEnabled);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInputPermissions&
    operator=(::ScriptModuleMinecraft::ScriptPlayerInputPermissions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
