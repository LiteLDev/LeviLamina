#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentityType : uint64 {
    PlayFab          = 0,
    XboxLive         = 1,
    Platform         = 2,
    PlatformNetwork  = 3,
    EduNetwork       = 4,
    MinecraftService = 5,
    Mock             = 6,
    Count            = 7,
    All              = 8,
};

}
