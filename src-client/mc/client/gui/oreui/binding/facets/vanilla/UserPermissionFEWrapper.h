#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/PermissionDenyReason.h"

namespace OreUI {

struct UserPermissionFEWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::PermissionDenyReason>> denyReasons;
    ::ll::TypedStorage<1, 1, bool>                                           allowed;
    // NOLINTEND
};

} // namespace OreUI
