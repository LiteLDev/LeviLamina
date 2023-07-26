#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITaskExecutionContext {

public:
    // prevent constructor by default
    ITaskExecutionContext& operator=(ITaskExecutionContext const&) = delete;
    ITaskExecutionContext(ITaskExecutionContext const&)            = delete;
    ITaskExecutionContext()                                        = delete;
};
