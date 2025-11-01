#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentityType : uint64 {
    PlayFab         = 0,
    XboxLive        = 1,
    Platform        = 2,
    PlatformNetwork = 3,
    EduNetwork      = 4,
    Mock            = 5,
    Count           = 6,
    All             = 7,
};

}
