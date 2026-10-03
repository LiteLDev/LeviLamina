#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerInputConnectionState : int {
    NotInitialized = 0,
    Connected      = 1,
    Disconnected   = 2,
};
