#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NetworkType : int {
    Local = 0,
    Lan = 1,
    External = 2,
    Friend = 3,
    Realm = 4,
    ThirdParty = 5,
    Gathering = 6,
    Invalid = 7,
};
