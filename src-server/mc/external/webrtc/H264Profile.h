#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class H264Profile : int {
    KProfileConstrainedBaseline = 0,
    KProfileBaseline = 1,
    KProfileMain = 2,
    KProfileConstrainedHigh = 3,
    KProfileHigh = 4,
    KProfilePredictiveHigh444 = 5,
};

}
