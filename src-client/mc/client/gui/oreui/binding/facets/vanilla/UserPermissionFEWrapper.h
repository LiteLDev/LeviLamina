#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/PermissionDenyReason.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct PermissionCheckResult; }
// clang-format on

namespace OreUI {

struct UserPermissionFEWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::PermissionDenyReason>> denyReasons;
    ::ll::TypedStorage<1, 1, bool>                                           allowed;
    // NOLINTEND

public:
    // prevent constructor by default
    UserPermissionFEWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UserPermissionFEWrapper(::Social::PermissionCheckResult userPermission);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Social::PermissionCheckResult userPermission);
    // NOLINTEND
};

} // namespace OreUI
