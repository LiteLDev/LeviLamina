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
    virtual void preReplicationTick(
        ::ServerPlayer&  serverPlayer,
        ::Tick const&    currentTick,
        ::EntityContext& userEntity
    ) /*override*/;

    virtual void playerTick(::Player& player, ::Tick const& currentTick) /*override*/;

    virtual void clearDimensionPlayerReplicationList(::Dimension& dimension) /*override*/;

    virtual void processDimensionPlayerReplication(::Dimension& dimension) /*override*/;

    virtual void postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick) /*override*/;

    virtual ~PlayerTickProxy() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
