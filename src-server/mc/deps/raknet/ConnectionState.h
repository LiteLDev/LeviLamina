#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class ConnectionState : int {
    Pending = 0,
    Connecting = 1,
    Connected = 2,
    Disconnecting = 3,
    SilentlyDisconnecting = 4,
    Disconnected = 5,
    NotConnected = 6,
};

}
