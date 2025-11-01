#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class XTaskQueueDispatchMode : uint {
    Manual = 0,
    ThreadPool = 1,
    SerializedThreadPool = 2,
    Immediate = 3,
};
