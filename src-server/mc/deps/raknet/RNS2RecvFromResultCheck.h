#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RNS2RecvFromResultCheck : int {
    PassReceivedDataToApp         = 1,
    HandleReceivedEmptyUdpPacket  = 0,
    HandleGracefullyClosedTcpConn = -1,
    HandleEnetdownNeterror        = -2,
    HandleOtherNeterrors          = -101,
};

}
