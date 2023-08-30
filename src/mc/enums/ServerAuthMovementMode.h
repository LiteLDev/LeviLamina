#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerAuthMovementMode : __int8 {
    ClientAuthoritative           = 0x0,
    ServerAuthoritative           = 0x1,
    ServerAuthoritativeWithRewind = 0x2,
};
