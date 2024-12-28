#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementPreview {

enum class ServerAuthMovementFlight : uchar {
    ClientAuthNoServerAuth     = 0,
    ClientAuthWithServerOption = 1,
    ServerAuthVanillaOnly      = 2,
    ServerAuthAll              = 3,
};

}
