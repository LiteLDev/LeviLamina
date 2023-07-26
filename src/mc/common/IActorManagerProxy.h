#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IActorManagerProxy {

public:
    // prevent constructor by default
    IActorManagerProxy& operator=(IActorManagerProxy const&) = delete;
    IActorManagerProxy(IActorManagerProxy const&)            = delete;
    IActorManagerProxy()                                     = delete;
};
