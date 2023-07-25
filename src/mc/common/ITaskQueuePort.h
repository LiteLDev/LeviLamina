#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ITaskQueuePort {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITASKQUEUEPORT
public:
    ITaskQueuePort& operator=(ITaskQueuePort const&) = delete;
    ITaskQueuePort(ITaskQueuePort const&)            = delete;
    ITaskQueuePort()                                 = delete;
#endif

public:
};
