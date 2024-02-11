#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class EndGatewayBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    EndGatewayBlockActor& operator=(EndGatewayBlockActor const&);
    EndGatewayBlockActor(EndGatewayBlockActor const&);
    EndGatewayBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EndGatewayBlockActor@@UEAA@XZ
    virtual ~EndGatewayBlockActor() = default;

    // vIndex: 1, symbol: ?load@EndGatewayBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@EndGatewayBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 16, symbol: ?triggerEvent@EndGatewayBlockActor@@UEAAXHH@Z
    virtual void triggerEvent(int b0, int b1);

    // vIndex: 20, symbol: ?hasAlphaLayer@EndGatewayBlockActor@@UEBA_NXZ
    virtual bool hasAlphaLayer() const;

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@EndGatewayBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ??0EndGatewayBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit EndGatewayBlockActor(class BlockPos const& pos);

    // symbol: ?setExitPosition@EndGatewayBlockActor@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setExitPosition(class BlockPos const& exitPosition);

    // symbol: ?teleportEntity@EndGatewayBlockActor@@QEAAXAEAVActor@@@Z
    MCAPI void teleportEntity(class Actor& entity);

    // symbol: ?findExitPortal@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVWorldGenerator@@AEBV2@@Z
    MCAPI static class BlockPos findExitPortal(class WorldGenerator& endGenerator, class BlockPos const& origin);

    // symbol: ?findValidSpawnAround@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@_NH@Z
    MCAPI static class BlockPos findValidSpawnAround(
        class BlockSource&    region,
        class BlockPos const& around,
        bool                  searchForEndStoneOnly,
        int                   searchRadius
    );

    // symbol: ?COOLDOWN_TIME@EndGatewayBlockActor@@2HB
    MCAPI static int const COOLDOWN_TIME;

    // symbol: ?EVENT_COOLDOWN@EndGatewayBlockActor@@2HB
    MCAPI static int const EVENT_COOLDOWN;

    // symbol: ?SPAWN_TIME@EndGatewayBlockActor@@2HB
    MCAPI static int const SPAWN_TIME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getHighestSection@EndGatewayBlockActor@@CAHAEAVWorldGenerator@@AEAVBlockVolume@@AEBVBlockPos@@@Z
    MCAPI static int
    _getHighestSection(class WorldGenerator& endGenerator, class BlockVolume& box, class BlockPos const& pos);

    // NOLINTEND
};
