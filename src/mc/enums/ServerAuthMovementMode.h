#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerAuthMovementMode : schar {
    ClientAuthoritative           = 0x0,
    ServerAuthoritative           = 0x1,
    ServerAuthoritativeWithRewind = 0x2,
};
