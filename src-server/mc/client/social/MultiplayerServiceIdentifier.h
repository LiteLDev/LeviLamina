#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class MultiplayerServiceIdentifier : int {
    XboxLive = 0,
    Nintendo = 1,
    AdHoc = 2,
    Playstation = 3,
    Edu = 4,
    Mock = 5,
    Undefined = -1,
};

}
