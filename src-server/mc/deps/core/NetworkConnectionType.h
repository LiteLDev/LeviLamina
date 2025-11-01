#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NetworkConnectionType : uchar {
    Wired = 0,
    Wifi = 1,
    Cellular = 2,
    Unknown = 3,
};
