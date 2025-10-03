#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SDLRequestStatus : int {
    Unknown      = 0,
    Success      = 1,
    RequireRetry = 2,
    Failure      = 3,
    Offline      = 4,
};
