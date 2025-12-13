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

    virtual void preReplicationTick(::ServerPlayer&, ::Tick const&, ::EntityContext&) = 0;

    virtual void playerTick(::Player&, ::Tick const&) = 0;

    virtual void clearDimensionPlayerReplicationList(::Dimension&) = 0;

    virtual void processDimensionPlayerReplication(::Dimension&) = 0;

    virtual void postReplicationtick(::ServerPlayer&, ::Tick const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
