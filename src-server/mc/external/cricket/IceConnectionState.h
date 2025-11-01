#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceConnectionState : int {
    KIceConnectionConnecting = 0,
    KIceConnectionFailed = 1,
    KIceConnectionConnected = 2,
    KIceConnectionCompleted = 3,
};

}
