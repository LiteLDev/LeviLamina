#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DataChannelPriority : int {
    // bitfield representation
    VeryLow = 1 << 7,
    Low = 1 << 8,
    Medium = 1 << 9,
    High = 1 << 10,
};

}
