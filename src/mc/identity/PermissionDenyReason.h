#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class PermissionDenyReason : uint {
    // bitfield representation
    None                   = 0,
    MinecraftBan           = 1u << 0,
    XboxLive               = 1u << 1,
    XboxLiveParental       = 1u << 2,
    XboxLiveBan            = 1u << 3,
    PlatformPlayStation    = 1u << 4,
    PlatformNintendoSwitch = 1u << 5,
    Unknown                = 1u << 6,
};

}
