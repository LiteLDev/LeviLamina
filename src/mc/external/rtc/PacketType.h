#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class PacketType : int {
    KUnknown                      = 0,
    KData                         = 1,
    KIceConnectivityCheck         = 2,
    KIceConnectivityCheckResponse = 3,
    KStunMessage                  = 4,
    KTurnMessage                  = 5,
};

}
