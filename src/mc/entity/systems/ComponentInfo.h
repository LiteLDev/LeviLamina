#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentInfo {
public:
    // prevent constructor by default
    ComponentInfo& operator=(ComponentInfo const&);
    ComponentInfo(ComponentInfo const&);
    ComponentInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1ComponentInfo@@QEAA@XZ
    MCAPI ~ComponentInfo();

    // NOLINTEND
};
