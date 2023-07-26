#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IBoatMovementProxy {

public:
    // prevent constructor by default
    IBoatMovementProxy& operator=(IBoatMovementProxy const&) = delete;
    IBoatMovementProxy(IBoatMovementProxy const&)            = delete;
    IBoatMovementProxy()                                     = delete;
};
