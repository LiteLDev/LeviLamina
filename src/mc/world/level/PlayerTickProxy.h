#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IPlayerTickProxy.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
class Player;
class ServerPlayer;
struct Tick;
// clang-format on

class PlayerTickProxy : public ::IPlayerTickProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void preReplicationTick(
        ::ServerPlayer&  serverPlayer,
        ::Tick const&    currentTick,
        ::EntityContext& userEntity
    ) /*override*/;

    // vIndex: 2
    virtual void playerTick(::Player& player, ::Tick const& currentTick) /*override*/;

    // vIndex: 3
    virtual void clearDimensionPlayerReplicationList(::Dimension& dimension) /*override*/;

    // vIndex: 4
    virtual void processDimensionPlayerReplication(::Dimension& dimension) /*override*/;

    // vIndex: 5
    virtual void postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick) /*override*/;

    // vIndex: 0
    virtual ~PlayerTickProxy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $preReplicationTick(::ServerPlayer& serverPlayer, ::Tick const& currentTick, ::EntityContext& userEntity);

    MCAPI void $playerTick(::Player& player, ::Tick const& currentTick);

    MCAPI void $clearDimensionPlayerReplicationList(::Dimension& dimension);

    MCAPI void $processDimensionPlayerReplication(::Dimension& dimension);

    MCAPI void $postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
