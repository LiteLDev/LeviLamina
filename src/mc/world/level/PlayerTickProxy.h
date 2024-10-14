#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IPlayerTickProxy.h"

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
    virtual void preReplicationTick(
        class ServerPlayer&  serverPlayer,
        struct Tick const&   currentTick,
        class EntityContext& userEntity
    );

    // vIndex: 2
    virtual void playerTick(class Player& player, struct Tick const& currentTick);

    // vIndex: 3
    virtual void clearDimensionPlayerReplicationList(class Dimension& dimension);

    // vIndex: 4
    virtual void processDimensionPlayerReplication(class Dimension& dimension);

    // vIndex: 5
    virtual void postReplicationtick(class ServerPlayer& serverPlayer, struct Tick const& currentTick);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void clearDimensionPlayerReplicationList$(class Dimension& dimension);

    MCAPI void playerTick$(class Player& player, struct Tick const& currentTick);

    MCAPI void postReplicationtick$(class ServerPlayer& serverPlayer, struct Tick const& currentTick);

    MCAPI void preReplicationTick$(
        class ServerPlayer&  serverPlayer,
        struct Tick const&   currentTick,
        class EntityContext& userEntity
    );

    MCAPI void processDimensionPlayerReplication$(class Dimension& dimension);

    // NOLINTEND
};
