#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
struct DimensionType;
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
};
