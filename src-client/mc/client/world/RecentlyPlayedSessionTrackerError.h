#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class RecentlyPlayedSessionTrackerError : uchar {
    NotInitialized  = 0,
    StoreLoadFailed = 1,
};

}
