#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class BackgroundTask {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASK
public:
    BackgroundTask& operator=(BackgroundTask const&) = delete;
    BackgroundTask(BackgroundTask const&)            = delete;
    BackgroundTask()                                 = delete;
#endif

public:
};
