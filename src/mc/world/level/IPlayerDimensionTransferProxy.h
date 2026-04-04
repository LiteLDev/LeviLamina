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
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerDimensionTransferProxy() = default;

    virtual void
    playerDimensionChangedEvent(::Player& player, ::DimensionType fromDimensionId, ::DimensionType toDimensionId) = 0;

    virtual ::Actor* getAgent(::Player& player) = 0;

    virtual void resetAgent(::Player& player) = 0;

    virtual void stopUsingItem(::Player& player) = 0;

    virtual bool hasRespawnPosition(::Player const& player) const = 0;

    virtual ::BlockPos const& getSpawnPosition(::Player const& player) const = 0;

    virtual bool isRespawningFromTheEnd(::Player const& player) const = 0;

    virtual void fireWillChangeDimension(::Player& player) = 0;

    virtual void moveTo(::Player& player, ::Vec3 const& position) = 0;

    virtual void setPreviousPosition(::Player& player) = 0;

    virtual void resetInterpolation(::Player& player) = 0;

    virtual void prepareRegion(::Player& player, ::Dimension const& dimension) = 0;

    virtual ::MovePlayerPacket
    createMovePlayerPacket(::Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const = 0;

    virtual void setAgent(::Player& player, ::Actor& agent) = 0;

    virtual ::Vec3 calculateAgentSpawnPosition(::Player const& player) const = 0;

    virtual bool isRespawnReady(::Player const& player) const = 0;

    virtual ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::Player const& player, ::BlockPos const& min, ::BlockPos const& max) const = 0;

    virtual void transferTickingArea(::Actor& actor, ::Dimension& dimension) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
