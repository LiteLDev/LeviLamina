#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentityType : uint64 {
    PlayFab         = 0,
    XboxLive        = 1,
    Platform        = 2,
    PlatformNetwork = 3,
    Mock            = 4,
    Count           = 5,
    All             = 6,
};

}
