#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class StreamState : int {
    Error      = -1,
    Connecting = 0,
    Buffering  = 1,
    Ready      = 2,
    Playing    = 3,
    Stopped    = 4,
};

}
