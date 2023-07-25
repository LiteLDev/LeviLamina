#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITaskExecutionContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITASKEXECUTIONCONTEXT
public:
    ITaskExecutionContext& operator=(ITaskExecutionContext const&) = delete;
    ITaskExecutionContext(ITaskExecutionContext const&)            = delete;
    ITaskExecutionContext()                                        = delete;
#endif

public:
};
