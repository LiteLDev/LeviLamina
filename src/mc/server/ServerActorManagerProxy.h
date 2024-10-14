#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ActorManagerProxy.h"

class ServerActorManagerProxy : public ::ActorManagerProxy {
public:
    // prevent constructor by default
    ServerActorManagerProxy& operator=(ServerActorManagerProxy const&);
    ServerActorManagerProxy(ServerActorManagerProxy const&);
    ServerActorManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerActorManagerProxy() = default;

    // vIndex: 1
    virtual void initializeActor(class Actor& actor);

    // vIndex: 2
    virtual bool validate(class Actor const& actor);

    // vIndex: 3
    virtual void removeActor(class Actor& actor);

    // vIndex: 4
    virtual void removeActorInLevelChunk(class Actor const& actor);

    // vIndex: 5
    virtual void deleteActorFromWorldInLevelChunk(class Actor const& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void deleteActorFromWorldInLevelChunk$(class Actor const& actor);

    MCAPI void initializeActor$(class Actor& actor);

    MCAPI void removeActor$(class Actor& actor);

    MCAPI void removeActorInLevelChunk$(class Actor const& actor);

    MCAPI bool validate$(class Actor const& actor);

    // NOLINTEND
};
