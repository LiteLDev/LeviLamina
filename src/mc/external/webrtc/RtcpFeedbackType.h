#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtcpFeedbackType : int {
    Ccm         = 0,
    Lntf        = 1,
    Nack        = 2,
    Remb        = 3,
    TransportCc = 4,
};

}
