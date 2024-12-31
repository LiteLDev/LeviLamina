#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Dimension;
class MovePlayerPacket;
class Player;
class SubChunkPos;
class Vec3;
// clang-format on

class IPlayerDimensionTransferProxy {
public:
    // prevent constructor by default
    IPlayerDimensionTransferProxy& operator=(IPlayerDimensionTransferProxy const&);
    IPlayerDimensionTransferProxy(IPlayerDimensionTransferProxy const&);
    IPlayerDimensionTransferProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayerDimensionTransferProxy() = default;

    // vIndex: 1
    virtual void playerDimensionChangedEvent(::Player&, ::DimensionType, ::DimensionType) = 0;

    // vIndex: 2
    virtual ::Actor* getAgent(::Player&) = 0;

    // vIndex: 3
    virtual void resetAgent(::Player&) = 0;

    // vIndex: 4
    virtual void stopUsingItem(::Player&) = 0;

    // vIndex: 5
    virtual bool hasRespawnPosition(::Player const&) const = 0;

    // vIndex: 6
    virtual ::BlockPos const& getSpawnPosition(::Player const&) const = 0;

    // vIndex: 7
    virtual bool isRespawningFromTheEnd(::Player const&) const = 0;

    // vIndex: 8
    virtual void fireWillChangeDimension(::Player&) = 0;

    // vIndex: 9
    virtual void moveTo(::Player&, ::Vec3 const&) = 0;

    // vIndex: 10
    virtual void setPreviousPosition(::Player&) = 0;

    // vIndex: 11
    virtual void resetInterpolation(::Player&) = 0;

    // vIndex: 12
    virtual void prepareRegion(::Player&, ::Dimension const&) = 0;

    // vIndex: 13
    virtual ::MovePlayerPacket
    createMovePlayerPacket(::Player const&, ::PlayerPositionModeComponent::PositionMode) const = 0;

    // vIndex: 14
    virtual void setAgent(::Player&, ::Actor&) = 0;

    // vIndex: 15
    virtual ::Vec3 calculateAgentSpawnPosition(::Player const&) const = 0;

    // vIndex: 16
    virtual bool isRespawnReady(::Player const&) const = 0;

    // vIndex: 17
    virtual ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::Player const&, ::BlockPos const&, ::BlockPos const&) const = 0;

    // vIndex: 18
    virtual void transferTickingArea(::Actor&, ::Dimension&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
