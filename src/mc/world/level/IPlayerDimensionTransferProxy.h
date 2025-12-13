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

    virtual void playerDimensionChangedEvent(::Player&, ::DimensionType, ::DimensionType) = 0;

    virtual ::Actor* getAgent(::Player&) = 0;

    virtual void resetAgent(::Player&) = 0;

    virtual void stopUsingItem(::Player&) = 0;

    virtual bool hasRespawnPosition(::Player const&) const = 0;

    virtual ::BlockPos const& getSpawnPosition(::Player const&) const = 0;

    virtual bool isRespawningFromTheEnd(::Player const&) const = 0;

    virtual void fireWillChangeDimension(::Player&) = 0;

    virtual void moveTo(::Player&, ::Vec3 const&) = 0;

    virtual void setPreviousPosition(::Player&) = 0;

    virtual void resetInterpolation(::Player&) = 0;

    virtual void prepareRegion(::Player&, ::Dimension const&) = 0;

    virtual ::MovePlayerPacket
    createMovePlayerPacket(::Player const&, ::PlayerPositionModeComponent::PositionMode) const = 0;

    virtual void setAgent(::Player&, ::Actor&) = 0;

    virtual ::Vec3 calculateAgentSpawnPosition(::Player const&) const = 0;

    virtual bool isRespawnReady(::Player const&) const = 0;

    virtual ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::Player const&, ::BlockPos const&, ::BlockPos const&) const = 0;

    virtual void transferTickingArea(::Actor&, ::Dimension&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
