#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtpPacketMediaType : uint64 {
    KAudio                  = 0,
    KVideo                  = 1,
    KRetransmission         = 2,
    KForwardErrorCorrection = 3,
    KPadding                = 4,
};

}
