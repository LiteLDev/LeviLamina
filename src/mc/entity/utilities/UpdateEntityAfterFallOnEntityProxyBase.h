#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateEntityAfterFallOnEntityProxyBase {
public:
    // prevent constructor by default
    UpdateEntityAfterFallOnEntityProxyBase& operator=(UpdateEntityAfterFallOnEntityProxyBase const&);
    UpdateEntityAfterFallOnEntityProxyBase(UpdateEntityAfterFallOnEntityProxyBase const&);
    UpdateEntityAfterFallOnEntityProxyBase();

public:
    // NOLINTBEGIN
    MCAPI static class Vec3 mDummy;

    // NOLINTEND
};
