#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtxMode : int {
    KRtxOff               = 0,
    KRtxRetransmitted     = 1,
    KRtxRedundantPayloads = 2,
};

}
