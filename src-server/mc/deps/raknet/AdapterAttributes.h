#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class AdapterAttributes : int {
    // bitfield representation
    NoAttributes = 0,
    IsMulticast  = 1 << 0,
    IsLoopback   = 1 << 1,
    HasNoGateway = 1 << 2,
};

}
