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
    virtual ~PlayerDimensionTransferProxy() /*override*/ = default;

    virtual void playerDimensionChangedEvent(
        ::Player&       player,
        ::DimensionType fromDimensionId,
        ::DimensionType toDimensionId
    ) /*override*/;

    virtual ::Actor* getAgent(::Player& player) /*override*/;

    virtual void resetAgent(::Player& player) /*override*/;

    virtual void stopUsingItem(::Player& player) /*override*/;

    virtual bool hasRespawnPosition(::Player const& player) const /*override*/;

    virtual ::BlockPos const& getSpawnPosition(::Player const& player) const /*override*/;

    virtual bool isRespawningFromTheEnd(::Player const& player) const /*override*/;

    virtual void fireWillChangeDimension(::Player& player) /*override*/;

    virtual void moveTo(::Player& player, ::Vec3 const& position) /*override*/;

    virtual void setPreviousPosition(::Player& player) /*override*/;

    virtual void resetInterpolation(::Player& player) /*override*/;

    virtual void prepareRegion(::Player& player, ::Dimension const& dimension) /*override*/;

    virtual ::MovePlayerPacket
    createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const
        /*override*/;

    virtual void setAgent(::Player& player, ::Actor& agent) /*override*/;

    virtual ::Vec3 calculateAgentSpawnPosition(::Player const& player) const /*override*/;

    virtual bool isRespawnReady(::Player const& player) const /*override*/;

    virtual ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const /*override*/;

    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $playerDimensionChangedEvent(::Player& player, ::DimensionType fromDimensionId, ::DimensionType toDimensionId);

    MCAPI ::Actor* $getAgent(::Player& player);

    MCAPI void $resetAgent(::Player& player);

    MCAPI void $stopUsingItem(::Player& player);

    MCAPI bool $hasRespawnPosition(::Player const& player) const;

    MCAPI ::BlockPos const& $getSpawnPosition(::Player const& player) const;

    MCAPI bool $isRespawningFromTheEnd(::Player const& player) const;

    MCAPI void $fireWillChangeDimension(::Player& player);

    MCAPI void $moveTo(::Player& player, ::Vec3 const& position);

    MCAPI void $setPreviousPosition(::Player& player);

    MCAPI void $resetInterpolation(::Player& player);

    MCAPI void $prepareRegion(::Player& player, ::Dimension const& dimension);

    MCAPI ::MovePlayerPacket
    $createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const;

    MCAPI void $setAgent(::Player& player, ::Actor& agent);

    MCAPI ::Vec3 $calculateAgentSpawnPosition(::Player const& player) const;

    MCAPI bool $isRespawnReady(::Player const& player) const;

    MCAPI ::std::pair<bool, ::std::optional<::SubChunkPos>>
    $hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const;

    MCFOLD void $transferTickingArea(::Actor& actor, ::Dimension& dimension);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
