#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class UserPresenceResult : uint {
    Unknown = 0,
    Online  = 1,
    Away    = 2,
    Offline = 3,
};

}
