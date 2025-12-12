#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class H264PacketizationTypes : int {
    KH264SingleNalu = 0,
    KH264StapA      = 1,
    KH264FuA        = 2,
};

}
