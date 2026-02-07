#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EntryType : int {
    XboxOffline     = 0,
    XboxOnline      = 1,
    PlatformOffline = 2,
    PlatformOnline  = 3,
    LinkedOffline   = 4,
    LinkedOnline    = 5,
    Count           = 6,
};
