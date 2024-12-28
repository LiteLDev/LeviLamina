#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RNS2RecvFromResultCheck : int {
    PassReceivedDataToApp         = 1,
    HandleReceivedEmptyUdpPacket  = 0,
    HandleGracefullyClosedTcpConn = 4294967295,
    HandleEnetdownNeterror        = 4294967294,
    HandleOtherNeterrors          = 4294967195,
};

}
