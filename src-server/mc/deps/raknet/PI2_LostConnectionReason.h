#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class PI2_LostConnectionReason : int {
    ClosedByUser = 0,
    DisconnectionNotification = 1,
    ConnectionLost = 2,
};

}
