#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ProbeFailureReason : int {
    KInvalidSendReceiveInterval = 0,
    KInvalidSendReceiveRatio    = 1,
    KTimeout                    = 2,
    KLast                       = 3,
};

}
