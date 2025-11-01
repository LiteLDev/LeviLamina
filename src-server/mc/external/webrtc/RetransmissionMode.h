#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RetransmissionMode : uchar {
    // bitfield representation
    KRetransmitOff = 0,
    KRetransmitBaseLayer = 1 << 1,
    KRetransmitHigherLayers = 1 << 2,
    KConditionallyRetransmitHigherLayers = 1 << 3,
    KRetransmitAllLayers = KRetransmitBaseLayer | KRetransmitHigherLayers,
};

}
