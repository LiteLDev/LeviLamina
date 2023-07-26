#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DirectActorMovementProxy {

public:
    // prevent constructor by default
    DirectActorMovementProxy& operator=(DirectActorMovementProxy const&) = delete;
    DirectActorMovementProxy(DirectActorMovementProxy const&)            = delete;
    DirectActorMovementProxy()                                           = delete;
};
