#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LocatorStateChangeRequest : int {
    None            = 0,
    Announce        = 1,
    StopAnnouncing  = 2,
    Discover        = 3,
    StopDiscovering = 4,
};
