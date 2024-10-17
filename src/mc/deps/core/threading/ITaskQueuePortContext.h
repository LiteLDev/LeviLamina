#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ITaskQueuePortContext {
public:
    // prevent constructor by default
    ITaskQueuePortContext& operator=(ITaskQueuePortContext const&);
    ITaskQueuePortContext(ITaskQueuePortContext const&);
    ITaskQueuePortContext();
};
