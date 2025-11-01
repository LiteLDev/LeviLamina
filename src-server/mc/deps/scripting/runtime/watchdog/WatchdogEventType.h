#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class WatchdogEventType : int {
    Slow = 0,
    Spike = 1,
    Hang = 2,
    StackOverflow = 3,
    OutOfMemory = 4,
    HighMemoryUsage = 5,
};

}
