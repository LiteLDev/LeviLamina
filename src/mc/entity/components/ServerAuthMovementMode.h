#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerAuthMovementMode : uchar {
    LegacyClientAuthoritativeV1 = 0,
    ClientAuthoritativeV2       = 1,
    ServerAuthoritativeV3       = 2,
};
