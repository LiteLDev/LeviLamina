#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceConnectionState : int {
    KIceConnectionConnecting = 0,
    KIceConnectionFailed     = 1,
    KIceConnectionConnected  = 2,
    KIceConnectionCompleted  = 3,
};

}
