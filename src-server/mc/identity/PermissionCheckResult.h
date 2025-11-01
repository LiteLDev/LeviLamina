#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PermissionCheckResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk20e2dd;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionCheckResult& operator=(PermissionCheckResult const&);
    PermissionCheckResult(PermissionCheckResult const&);
    PermissionCheckResult();

};

}
