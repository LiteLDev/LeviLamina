#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InternalSystemInfo {
public:
    // prevent constructor by default
    InternalSystemInfo& operator=(InternalSystemInfo const&);
    InternalSystemInfo(InternalSystemInfo const&);
    InternalSystemInfo();

public:
    // NOLINTBEGIN
    MCAPI InternalSystemInfo(struct InternalSystemInfo&&);

    MCAPI ~InternalSystemInfo();

    // NOLINTEND
};
