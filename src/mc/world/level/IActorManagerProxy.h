#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IActorManagerProxy {
public:
    // prevent constructor by default
    IActorManagerProxy& operator=(IActorManagerProxy const&);
    IActorManagerProxy(IActorManagerProxy const&);
    IActorManagerProxy();
};
