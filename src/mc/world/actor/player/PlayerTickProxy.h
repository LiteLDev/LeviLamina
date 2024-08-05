#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/IPlayerTickProxy.h"

class PlayerTickProxy : public ::IPlayerTickProxy {
public:
    // prevent constructor by default
    PlayerTickProxy& operator=(PlayerTickProxy const&);
    PlayerTickProxy(PlayerTickProxy const&);
    PlayerTickProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerTickProxy() = default;

    // vIndex: 1
    virtual void preReplicationTick(class ServerPlayer&, struct Tick const&, class EntityContext&);

    // vIndex: 2
    virtual void playerTick(class Player&, struct Tick const&);

    // vIndex: 3
    virtual void clearDimensionPlayerReplicationList(class Dimension&);

    // vIndex: 4
    virtual void processDimensionPlayerReplication(class Dimension&);

    // vIndex: 5
    virtual void postReplicationtick(class ServerPlayer&, struct Tick const&);

    // NOLINTEND
};
