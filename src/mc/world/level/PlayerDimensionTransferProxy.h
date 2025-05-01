#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/world/level/IPlayerDimensionTransferProxy.h"

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

class PlayerDimensionTransferProxy : public ::IPlayerDimensionTransferProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerDimensionTransferProxy() /*override*/ = default;

    // vIndex: 1
    virtual void playerDimensionChangedEvent(
        ::Player&       player,
        ::DimensionType fromDimensionId,
        ::DimensionType toDimensionId
    ) /*override*/;

    // vIndex: 2
    virtual ::Actor* getAgent(::Player& player) /*override*/;

    // vIndex: 3
    virtual void resetAgent(::Player& player) /*override*/;

    // vIndex: 4
    virtual void stopUsingItem(::Player& player) /*override*/;

    // vIndex: 5
    virtual bool hasRespawnPosition(::Player const& player) const /*override*/;

    // vIndex: 6
    virtual ::BlockPos const& getSpawnPosition(::Player const& player) const /*override*/;

    // vIndex: 7
    virtual bool isRespawningFromTheEnd(::Player const& player) const /*override*/;

    // vIndex: 8
    virtual void fireWillChangeDimension(::Player& player) /*override*/;

    // vIndex: 9
    virtual void moveTo(::Player& player, ::Vec3 const& position) /*override*/;

    // vIndex: 10
    virtual void setPreviousPosition(::Player& player) /*override*/;

    // vIndex: 11
    virtual void resetInterpolation(::Player& player) /*override*/;

    // vIndex: 12
    virtual void prepareRegion(::Player& player, ::Dimension const& dimension) /*override*/;

    // vIndex: 13
    virtual ::MovePlayerPacket
    createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const
        /*override*/;

    // vIndex: 14
    virtual void setAgent(::Player& player, ::Actor& agent) /*override*/;

    // vIndex: 15
    virtual ::Vec3 calculateAgentSpawnPosition(::Player const& player) const /*override*/;

    // vIndex: 16
    virtual bool isRespawnReady(::Player const& player) const /*override*/;

    // vIndex: 17
    virtual ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const /*override*/;

    // vIndex: 18
    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $playerDimensionChangedEvent(::Player& player, ::DimensionType fromDimensionId, ::DimensionType toDimensionId);

    MCNAPI ::Actor* $getAgent(::Player& player);

    MCNAPI void $resetAgent(::Player& player);

    MCNAPI void $stopUsingItem(::Player& player);

    MCNAPI bool $hasRespawnPosition(::Player const& player) const;

    MCNAPI ::BlockPos const& $getSpawnPosition(::Player const& player) const;

    MCNAPI bool $isRespawningFromTheEnd(::Player const& player) const;

    MCNAPI void $fireWillChangeDimension(::Player& player);

    MCNAPI void $moveTo(::Player& player, ::Vec3 const& position);

    MCNAPI void $setPreviousPosition(::Player& player);

    MCNAPI void $resetInterpolation(::Player& player);

    MCNAPI void $prepareRegion(::Player& player, ::Dimension const& dimension);

    MCNAPI ::MovePlayerPacket
    $createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const;

    MCNAPI void $setAgent(::Player& player, ::Actor& agent);

    MCNAPI ::Vec3 $calculateAgentSpawnPosition(::Player const& player) const;

    MCNAPI bool $isRespawnReady(::Player const& player) const;

    MCNAPI ::std::pair<bool, ::std::optional<::SubChunkPos>>
    $hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const;

    MCNAPI void $transferTickingArea(::Actor& actor, ::Dimension& dimension);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
