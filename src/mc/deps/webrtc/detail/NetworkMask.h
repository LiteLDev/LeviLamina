#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class NetworkMask {
public:
    // prevent constructor by default
    NetworkMask& operator=(NetworkMask const&);
    NetworkMask(NetworkMask const&);
    NetworkMask();
};

}; // namespace rtc
