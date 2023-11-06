#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/components/IActorManagerProxy.h"

class ServerActorManagerProxy : public ::IActorManagerProxy {
public:
    // prevent constructor by default
    ServerActorManagerProxy& operator=(ServerActorManagerProxy const&);
    ServerActorManagerProxy(ServerActorManagerProxy const&);
    ServerActorManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ServerActorManagerProxy();

    // vIndex: 1, symbol: ?initializeActor@ServerActorManagerProxy@@UEAAXAEAVActor@@@Z
    virtual void initializeActor(class Actor&);

    // vIndex: 2, symbol: ?validate@ServerActorManagerProxy@@UEAA_NAEBVActor@@@Z
    virtual bool validate(class Actor const&);

    // vIndex: 3, symbol: ?removeActorInLevelChunk@ServerActorManagerProxy@@UEAAXAEBVActor@@@Z
    virtual void removeActorInLevelChunk(class Actor const&);

    // vIndex: 4, symbol: ?deleteActorFromWorldInLevelChunk@ServerActorManagerProxy@@UEAAXAEBVActor@@@Z
    virtual void deleteActorFromWorldInLevelChunk(class Actor const&);

    // NOLINTEND
};
