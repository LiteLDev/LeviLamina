#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairAddressFamily : int {
    KUnknown   = 0,
    KIpv4      = 1,
    KIpv6      = 2,
    KNumValues = 3,
};

}
