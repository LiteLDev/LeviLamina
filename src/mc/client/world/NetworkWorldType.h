#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NetworkWorldType : int {
    None                = 0,
    Remote              = 1,
    External            = 2,
    Friend              = 3,
    CrossPlatformFriend = 4,
    ThirdParty          = 5,
};
