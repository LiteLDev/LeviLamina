#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class RecentlyPlayedLoadError : uchar {
    InvalidStoragePath = 0,
    ReadFailed         = 1,
    InvalidJson        = 2,
    UnsupportedVersion = 3,
    InvalidEntries     = 4,
    InvalidEntry       = 5,
};

}
