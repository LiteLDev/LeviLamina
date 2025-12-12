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
    MCNAPI void
    $preReplicationTick(::ServerPlayer& serverPlayer, ::Tick const& currentTick, ::EntityContext& userEntity);

    MCNAPI void $playerTick(::Player& player, ::Tick const& currentTick);

    MCNAPI void $clearDimensionPlayerReplicationList(::Dimension& dimension);

    MCNAPI void $processDimensionPlayerReplication(::Dimension& dimension);

    MCNAPI void $postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
