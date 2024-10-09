#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IActorManagerProxy.h"

class ActorManagerProxy : public ::IActorManagerProxy {
public:
    // prevent constructor by default
    ActorManagerProxy& operator=(ActorManagerProxy const&);
    ActorManagerProxy(ActorManagerProxy const&);
    ActorManagerProxy();

public:
    // NOLINTBEGIN
    MCVAPI void removeActor(class Actor& actor);

    // NOLINTEND
};
