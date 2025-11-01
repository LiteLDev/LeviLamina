#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class TurnAttributeType : int {
    ChannelNumber      = 12,
    TurnLifetime       = 13,
    XorPeerAddress     = 18,
    XorRelayedAddress  = 22,
    EvenPort           = 24,
    RequestedTransport = 25,
    DontFragment       = 26,
    ReservationToken   = 34,
};

}
