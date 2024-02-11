#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemInfo {
public:
    // prevent constructor by default
    SystemInfo& operator=(SystemInfo const&);
    SystemInfo(SystemInfo const&);
    SystemInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0SystemInfo@@QEAA@$$QEAU0@@Z
    MCAPI SystemInfo(struct SystemInfo&&);

    // symbol: ??1SystemInfo@@QEAA@XZ
    MCAPI ~SystemInfo();

    // NOLINTEND
};
