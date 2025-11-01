#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class LossBasedState : int {
    KIncreasing = 0,
    KIncreaseUsingPadding = 1,
    KDecreasing = 2,
    KDelayBasedEstimate = 3,
};

}
