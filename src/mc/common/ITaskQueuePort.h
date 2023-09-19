#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ITaskQueuePort {
public:
    // prevent constructor by default
    ITaskQueuePort& operator=(ITaskQueuePort const&);
    ITaskQueuePort(ITaskQueuePort const&);
    ITaskQueuePort();
};
