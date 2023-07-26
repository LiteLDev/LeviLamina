#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ITaskQueue {

public:
    // prevent constructor by default
    ITaskQueue& operator=(ITaskQueue const&) = delete;
    ITaskQueue(ITaskQueue const&)            = delete;
    ITaskQueue()                             = delete;
};
