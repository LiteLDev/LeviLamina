#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/components/IActorManagerProxy.h"

class ActorManagerProxy : public ::IActorManagerProxy {
public:
    // prevent constructor by default
    ActorManagerProxy& operator=(ActorManagerProxy const&);
    ActorManagerProxy(ActorManagerProxy const&);
    ActorManagerProxy();

public:
    // NOLINTBEGIN
    // symbol: ?removeActor@ActorManagerProxy@@UEAAXAEAVActor@@@Z
    MCVAPI void removeActor(class Actor&);

    // NOLINTEND
};
