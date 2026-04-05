#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
class Player;
class ServerPlayer;
struct Tick;
// clang-format on

class IPlayerTickProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerTickProxy() = default;

    virtual void
    preReplicationTick(::ServerPlayer& serverPlayer, ::Tick const& currentTick, ::EntityContext& userEntity) = 0;

    virtual void playerTick(::Player& player, ::Tick const& currentTick) = 0;

    virtual void clearDimensionPlayerReplicationList(::Dimension& dimension) = 0;

    virtual void processDimensionPlayerReplication(::Dimension& dimension) = 0;

    virtual void postReplicationtick(::ServerPlayer& serverPlayer, ::Tick const& currentTick) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
