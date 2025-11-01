#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class AdapterType : int {
    // bitfield representation
    Unknown = 0,
    Ethernet = 1 << 0,
    Wifi = 1 << 1,
    Cellular = 1 << 2,
    Vpn = 1 << 3,
    Loopback = 1 << 4,
    Any = 1 << 5,
    Cellular2g = 1 << 6,
    Cellular3g = 1 << 7,
    Cellular4g = 1 << 8,
    Cellular5g = 1 << 9,
};

}
