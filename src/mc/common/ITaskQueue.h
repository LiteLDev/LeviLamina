#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ITaskQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITASKQUEUE
public:
    ITaskQueue& operator=(ITaskQueue const&) = delete;
    ITaskQueue(ITaskQueue const&)            = delete;
    ITaskQueue()                             = delete;
#endif

public:
};
