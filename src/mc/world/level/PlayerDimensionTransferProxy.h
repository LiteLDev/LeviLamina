#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/world/level/IPlayerDimensionTransferProxy.h"

class PlayerDimensionTransferProxy : public ::IPlayerDimensionTransferProxy {
public:
    // prevent constructor by default
    PlayerDimensionTransferProxy& operator=(PlayerDimensionTransferProxy const&);
    PlayerDimensionTransferProxy(PlayerDimensionTransferProxy const&);
    PlayerDimensionTransferProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerDimensionTransferProxy();

    // vIndex: 1
    virtual void
    playerDimensionChangedEvent(class Player& player, DimensionType fromDimensionId, DimensionType toDimensionId);

    // vIndex: 2
    virtual class Actor* getAgent(class Player& player);

    // vIndex: 3
    virtual void resetAgent(class Player& player);

    // vIndex: 4
    virtual void stopUsingItem(class Player& player);

    // vIndex: 5
    virtual bool hasRespawnPosition(class Player const& player) const;

    // vIndex: 6
    virtual class BlockPos const& getSpawnPosition(class Player const& player) const;

    // vIndex: 7
    virtual bool isRespawningFromTheEnd(class Player const& player) const;

    // vIndex: 8
    virtual void fireWillChangeDimension(class Player& player);

    // vIndex: 9
    virtual void moveTo(class Player& player, class Vec3 const& position);

    // vIndex: 10
    virtual void setPreviousPosition(class Player& player);

    // vIndex: 11
    virtual void resetInterpolation(class Player& player);

    // vIndex: 12
    virtual void prepareRegion(class Player& player, class Dimension const& dimension);

    // vIndex: 13
    virtual class MovePlayerPacket
    createMovePlayerPacket(class Player const& player, ::PlayerPositionModeComponent::PositionMode resetPosition) const;

    // vIndex: 14
    virtual void setAgent(class Player& player, class Actor& agent);

    // vIndex: 15
    virtual class Vec3 calculateAgentSpawnPosition(class Player const& player) const;

    // vIndex: 16
    virtual bool isRespawnReady(class Player const& player) const;

    // vIndex: 17
    virtual std::pair<bool, std::optional<class SubChunkPos>>
    hasSubChunksAt(class Player const& player, class BlockPos const& min, class BlockPos const& max) const;

    // vIndex: 18
    virtual void transferTickingArea(class Actor& actor, class Dimension& dimension);

    // NOLINTEND
};
