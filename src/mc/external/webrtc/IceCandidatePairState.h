#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairState : int {
    Waiting    = 0,
    InProgress = 1,
    Succeeded  = 2,
    Failed     = 3,
};

}
