#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtpPacketMediaType : uint64 {
    KAudio                  = 0,
    KVideo                  = 0,
    KRetransmission         = 0,
    KForwardErrorCorrection = 0,
    KPadding                = 0,
};

}
