#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class ConnectionType : short {
    Undefined                 = 65535,
    Local                     = 0,
    IPv4                      = 1,
    IPv6                      = 2,
    WebSocketsWebRTCSignaling = 3,
    Nat                       = 5,
    Upnp                      = 6,
    UnknownIP                 = 7,
};

}
