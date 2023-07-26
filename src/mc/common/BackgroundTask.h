#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class BackgroundTask {

public:
    // prevent constructor by default
    BackgroundTask& operator=(BackgroundTask const&) = delete;
    BackgroundTask(BackgroundTask const&)            = delete;
    BackgroundTask()                                 = delete;
};
