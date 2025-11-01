#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TransportLayer : int {
    // bitfield representation
    RakNet = 0,
    NetherWebSockets = 1 << 1,
    Default = 1 << 1,
    Unknown = 1 << 2,
};
