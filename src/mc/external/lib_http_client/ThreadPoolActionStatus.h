#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct ThreadPoolActionStatus {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OS_THREADPOOLACTIONSTATUS
public:
    ThreadPoolActionStatus& operator=(ThreadPoolActionStatus const&) = delete;
    ThreadPoolActionStatus(ThreadPoolActionStatus const&)            = delete;
    ThreadPoolActionStatus()                                         = delete;
#endif

public:
};

}; // namespace OS
