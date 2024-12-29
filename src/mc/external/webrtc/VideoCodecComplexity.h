#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VideoCodecComplexity : int {
    KComplexityLow    = -1,
    KComplexityNormal = 0,
    KComplexityHigh   = 1,
    KComplexityHigher = 2,
    KComplexityMax    = 3,
};

}
