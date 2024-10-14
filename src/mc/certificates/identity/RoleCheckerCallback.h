#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoleCheckerCallback {
public:
    // prevent constructor by default
    RoleCheckerCallback& operator=(RoleCheckerCallback const&);
    RoleCheckerCallback(RoleCheckerCallback const&);
    RoleCheckerCallback();

public:
    // NOLINTBEGIN
    MCAPI ~RoleCheckerCallback();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
