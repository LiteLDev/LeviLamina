#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidatePairProtocol : int {
    KUnknown = 0,
    KUdp = 1,
    KTcp = 2,
    KSsltcp = 3,
    KTls = 4,
    KNumValues = 5,
};

}
