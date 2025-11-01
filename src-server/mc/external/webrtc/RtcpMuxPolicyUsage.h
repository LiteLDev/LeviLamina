#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtcpMuxPolicyUsage : int {
    KRtcpMuxPolicyUsageRequire   = 0,
    KRtcpMuxPolicyUsageNegotiate = 1,
    KRtcpMuxPolicyUsageMax       = 2,
};

}
