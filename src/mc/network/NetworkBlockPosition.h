#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkBlockPosition {

public:
    // prevent constructor by default
    NetworkBlockPosition& operator=(NetworkBlockPosition const&) = delete;
    NetworkBlockPosition(NetworkBlockPosition const&)            = delete;
    NetworkBlockPosition()                                       = delete;
};
