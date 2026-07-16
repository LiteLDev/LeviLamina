#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceTransportStateInternal : int {
    Init       = 0,
    Connecting = 1,
    Completed  = 2,
    Failed     = 3,
};

}
