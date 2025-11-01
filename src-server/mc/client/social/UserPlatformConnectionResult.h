#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class UserPlatformConnectionResult : int {
    Anonymous = 0,
    NotConnected = 1,
    Connected = 2,
    ConnectionFailed = 3,
    OfflineOnly = 4,
    UserBanned = 5,
};

}
