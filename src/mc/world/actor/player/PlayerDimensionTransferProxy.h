#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/player/IPlayerDimensionTransferProxy.h"

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
    virtual void playerDimensionChangedEvent(class Player&, DimensionType, DimensionType);

    // vIndex: 2
    virtual class Actor* getAgent(class Player&);

    // vIndex: 3
    virtual void resetAgent(class Player&);

    // vIndex: 4
    virtual void stopUsingItem(class Player&);

    // vIndex: 5
    virtual bool hasRespawnPosition(class Player const&) const;

    // vIndex: 6
    virtual class BlockPos const& getSpawnPosition(class Player const&) const;

    // vIndex: 7
    virtual bool isRespawningFromTheEnd(class Player const&) const;

    // vIndex: 8
    virtual void fireWillChangeDimension(class Player&);

    // vIndex: 9
    virtual void moveTo(class Player&, class Vec3 const&);

    // vIndex: 10
    virtual void setPreviousPosition(class Player&);

    // vIndex: 11
    virtual void resetInterpolation(class Player&);

    // vIndex: 12
    virtual void prepareRegion(class Player&, class Dimension const&);

    // vIndex: 13
    virtual class MovePlayerPacket
    createMovePlayerPacket(class Player const&, ::PlayerPositionModeComponent::PositionMode) const;

    // vIndex: 14
    virtual void setAgent(class Player&, class Actor&);

    // vIndex: 15
    virtual class Vec3 calculateAgentSpawnPosition(class Player const&) const;

    // vIndex: 16
    virtual bool isRespawnReady(class Player const&) const;

    // vIndex: 17
    virtual std::pair<bool, std::optional<class SubChunkPos>>
    hasSubChunksAt(class Player const&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 18
    virtual void transferTickingArea(class Actor&, class Dimension&);

    // NOLINTEND
};
