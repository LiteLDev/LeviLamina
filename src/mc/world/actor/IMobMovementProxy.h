#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IMobMovementProxy {

public:
    // prevent constructor by default
    IMobMovementProxy& operator=(IMobMovementProxy const&) = delete;
    IMobMovementProxy(IMobMovementProxy const&)            = delete;
    IMobMovementProxy()                                    = delete;
};
