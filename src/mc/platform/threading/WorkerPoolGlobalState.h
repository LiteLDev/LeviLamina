#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorkerPoolGlobalState {

public:
    // prevent constructor by default
    WorkerPoolGlobalState& operator=(WorkerPoolGlobalState const&) = delete;
    WorkerPoolGlobalState(WorkerPoolGlobalState const&)            = delete;
    WorkerPoolGlobalState()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1WorkerPoolGlobalState\@\@QEAA\@XZ
     */
    MCAPI ~WorkerPoolGlobalState();
    // NOLINTEND
};
