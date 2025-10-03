#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class ConnectionType : short {
    Undefined                 = -1,
    Local                     = 0,
    IPv4                      = 1,
    IPv6                      = 2,
    WebSocketsWebRTCSignaling = 3,
    LANWebRTCSignaling        = 4,
    Nat                       = 5,
    Upnp                      = 6,
    UnknownIP                 = 7,
};

}
