#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SctpTransportState : int {
    KNew        = 0,
    KConnecting = 1,
    KConnected  = 2,
    KClosed     = 3,
    KNumValues  = 4,
};

}
