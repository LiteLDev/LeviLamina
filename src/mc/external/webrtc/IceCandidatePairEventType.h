#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairEventType : int {
    KCheckSent             = 0,
    KCheckReceived         = 1,
    KCheckResponseSent     = 2,
    KCheckResponseReceived = 3,
    KNumValues             = 4,
};

}
