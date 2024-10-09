#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/systems/SystemInfo.h"

struct InternalSystemInfo : public SystemInfo {
public:
    // NOLINTBEGIN
    MCAPI InternalSystemInfo(struct InternalSystemInfo&&);

    MCAPI ~InternalSystemInfo();

    // NOLINTEND
};
