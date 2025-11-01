#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTickConfigurationComponentDescriptor {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::array<int, 2>> mDelayIntervalRange;
    ::ll::TypedStorage<1, 1, bool> mLooping;
    // NOLINTEND

};

}
