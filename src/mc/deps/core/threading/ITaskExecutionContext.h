#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITaskExecutionContext {
public:
    // prevent constructor by default
    ITaskExecutionContext& operator=(ITaskExecutionContext const&);
    ITaskExecutionContext(ITaskExecutionContext const&);
    ITaskExecutionContext();
};
