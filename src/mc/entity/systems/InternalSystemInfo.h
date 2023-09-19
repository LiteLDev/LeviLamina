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
    // symbol: ??0InternalSystemInfo@@QEAA@$$QEAU0@@Z
    MCAPI InternalSystemInfo(struct InternalSystemInfo&&);

    // symbol: ??1InternalSystemInfo@@QEAA@XZ
    MCAPI ~InternalSystemInfo();

    // NOLINTEND
};
