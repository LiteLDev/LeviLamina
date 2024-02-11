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
    // vIndex: 0, symbol: ??1PlayerDimensionTransferProxy@@UEAA@XZ
    virtual ~PlayerDimensionTransferProxy();

    // vIndex: 1, symbol:
    // ?playerDimensionChangedEvent@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    virtual void playerDimensionChangedEvent(class Player&, DimensionType, DimensionType);

    // vIndex: 2, symbol: ?getAgent@PlayerDimensionTransferProxy@@UEAAPEAVActor@@AEAVPlayer@@@Z
    virtual class Actor* getAgent(class Player&);

    // vIndex: 3, symbol: ?resetAgent@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@@Z
    virtual void resetAgent(class Player&);

    // vIndex: 4, symbol: ?stopUsingItem@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@@Z
    virtual void stopUsingItem(class Player&);

    // vIndex: 5, symbol: ?hasRespawnPosition@PlayerDimensionTransferProxy@@UEBA_NAEBVPlayer@@@Z
    virtual bool hasRespawnPosition(class Player const&) const;

    // vIndex: 6, symbol: ?getSpawnPosition@PlayerDimensionTransferProxy@@UEBAAEBVBlockPos@@AEBVPlayer@@@Z
    virtual class BlockPos const& getSpawnPosition(class Player const&) const;

    // vIndex: 7, symbol: ?isRespawningFromTheEnd@PlayerDimensionTransferProxy@@UEBA_NAEBVPlayer@@@Z
    virtual bool isRespawningFromTheEnd(class Player const&) const;

    // vIndex: 8, symbol: ?fireWillChangeDimension@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@@Z
    virtual void fireWillChangeDimension(class Player&);

    // vIndex: 9, symbol: ?moveTo@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@AEBVVec3@@@Z
    virtual void moveTo(class Player&, class Vec3 const&);

    // vIndex: 10, symbol: ?setPreviousPosition@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@@Z
    virtual void setPreviousPosition(class Player&);

    // vIndex: 11, symbol: ?resetInterpolation@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@@Z
    virtual void resetInterpolation(class Player&);

    // vIndex: 12, symbol: ?prepareRegion@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@AEBVDimension@@@Z
    virtual void prepareRegion(class Player&, class Dimension const&);

    // vIndex: 13, symbol:
    // ?createMovePlayerPacket@PlayerDimensionTransferProxy@@UEBA?AVMovePlayerPacket@@AEBVPlayer@@W4PositionMode@PlayerPositionModeComponent@@@Z
    virtual class MovePlayerPacket
    createMovePlayerPacket(class Player const&, ::PlayerPositionModeComponent::PositionMode) const;

    // vIndex: 14, symbol: ?setAgent@PlayerDimensionTransferProxy@@UEAAXAEAVPlayer@@AEAVActor@@@Z
    virtual void setAgent(class Player&, class Actor&);

    // vIndex: 15, symbol: ?calculateAgentSpawnPosition@PlayerDimensionTransferProxy@@UEBA?AVVec3@@AEBVPlayer@@@Z
    virtual class Vec3 calculateAgentSpawnPosition(class Player const&) const;

    // vIndex: 16, symbol: ?isRespawnReady@PlayerDimensionTransferProxy@@UEBA_NAEBVPlayer@@@Z
    virtual bool isRespawnReady(class Player const&) const;

    // vIndex: 17, symbol:
    // ?hasSubChunksAt@PlayerDimensionTransferProxy@@UEBA?AU?$pair@_NV?$optional@VSubChunkPos@@@std@@@std@@AEBVPlayer@@AEBVBlockPos@@1@Z
    virtual std::pair<bool, std::optional<class SubChunkPos>>
    hasSubChunksAt(class Player const&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 18, symbol: ?transferTickingArea@PlayerDimensionTransferProxy@@UEAAXAEAVActor@@AEAVDimension@@@Z
    virtual void transferTickingArea(class Actor&, class Dimension&);

    // NOLINTEND
};
