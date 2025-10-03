#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class BandwidthUsage : int {
    KBwNormal     = 0,
    KBwUnderusing = 1,
    KBwOverusing  = 2,
    KLast         = 3,
};

}
