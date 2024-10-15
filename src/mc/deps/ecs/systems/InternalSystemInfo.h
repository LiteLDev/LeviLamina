#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/systems/SystemInfo.h"

struct InternalSystemInfo : public SystemInfo {
public:
    // NOLINTBEGIN
    MCAPI InternalSystemInfo(struct InternalSystemInfo&&);

    MCAPI ~InternalSystemInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct InternalSystemInfo&&);

    MCAPI void dtor$();

    // NOLINTEND
};
