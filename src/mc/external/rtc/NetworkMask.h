#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class NetworkMask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnkb7cae0;
    ::ll::UntypedStorage<4, 4>  mUnk373f62;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkMask& operator=(NetworkMask const&);
    NetworkMask(NetworkMask const&);
    NetworkMask();
};

} // namespace rtc
