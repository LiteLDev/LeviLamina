#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class StreamState : int {
    Closed = 0,
    Opening = 1,
    Open = 2,
};

}
