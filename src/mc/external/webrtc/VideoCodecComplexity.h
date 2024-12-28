#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VideoCodecComplexity : int {
    KComplexityLow    = 4294967295,
    KComplexityNormal = 0,
    KComplexityHigh   = 1,
    KComplexityHigher = 2,
    KComplexityMax    = 3,
};

}
