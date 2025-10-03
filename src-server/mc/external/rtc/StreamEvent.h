#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class StreamEvent : int {
    // bitfield representation
    Open  = 1 << 0,
    Read  = 1 << 1,
    Write = 1 << 2,
    Close = 1 << 3,
};

}
