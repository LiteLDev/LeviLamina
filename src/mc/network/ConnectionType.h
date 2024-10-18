#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class ConnectionType : short {
    Undefined                 = -1,
    Local                     = 0x0,
    IPv4                      = 0x1,
    IPv6                      = 0x2,
    WebSocketsWebRTCSignaling = 0x3,
    NAT                       = 0x5,
    UPNP                      = 0x6,
    UnknownIP                 = 0x7,
};
};
