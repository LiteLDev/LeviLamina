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
    // vIndex: 0
    virtual ~IPlayerTickProxy() = default;

    // vIndex: 1
    virtual void preReplicationTick(::ServerPlayer&, ::Tick const&, ::EntityContext&) = 0;

    // vIndex: 2
    virtual void playerTick(::Player&, ::Tick const&) = 0;

    // vIndex: 3
    virtual void clearDimensionPlayerReplicationList(::Dimension&) = 0;

    // vIndex: 4
    virtual void processDimensionPlayerReplication(::Dimension&) = 0;

    // vIndex: 5
    virtual void postReplicationtick(::ServerPlayer&, ::Tick const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
