#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class DispatcherEvent : int {
    // bitfield representation
    Read    = 1 << 0,
    Write   = 1 << 1,
    Connect = 1 << 2,
    Close   = 1 << 3,
    Accept  = 1 << 4,
};

}
