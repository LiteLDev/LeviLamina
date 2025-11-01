#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class SocketState : int {
    KClosed       = 0,
    KConnecting   = 1,
    KConnected    = 2,
    KShuttingDown = 3,
};

}
