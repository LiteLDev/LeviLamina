#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class ThreadPriority : int {
    KLow      = 1,
    KNormal   = 2,
    KHigh     = 3,
    KRealtime = 4,
};

}
