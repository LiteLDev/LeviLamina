#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorkerPoolGlobalState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKERPOOLGLOBALSTATE
public:
    WorkerPoolGlobalState& operator=(WorkerPoolGlobalState const&) = delete;
    WorkerPoolGlobalState(WorkerPoolGlobalState const&)            = delete;
    WorkerPoolGlobalState()                                        = delete;
#endif

public:
    /**
     * @symbol ??1WorkerPoolGlobalState\@\@QEAA\@XZ
     */
    MCAPI ~WorkerPoolGlobalState();
};
