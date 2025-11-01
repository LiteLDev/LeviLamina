#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RtcpFeedbackMessageType : int {
    GenericNack = 0,
    Pli = 1,
    Fir = 2,
};

}
