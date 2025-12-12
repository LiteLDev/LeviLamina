#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TransportLayer : int {
    RakNet           = 0,
    NetherWebSockets = 2,
    Unknown          = 4,
    Default          = 2,
};
