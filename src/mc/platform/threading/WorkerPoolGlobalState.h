#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorkerPoolGlobalState {
public:
    // prevent constructor by default
    WorkerPoolGlobalState& operator=(WorkerPoolGlobalState const&);
    WorkerPoolGlobalState(WorkerPoolGlobalState const&);
    WorkerPoolGlobalState();

public:
    // NOLINTBEGIN
    // symbol: ??1WorkerPoolGlobalState@@QEAA@XZ
    MCAPI ~WorkerPoolGlobalState();

    // NOLINTEND
};
