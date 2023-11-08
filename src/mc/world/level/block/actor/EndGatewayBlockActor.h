#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@EndGatewayBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 8, symbol: ?onChanged@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 16, symbol: ?triggerEvent@EndGatewayBlockActor@@UEAAXHH@Z
    virtual void triggerEvent(int, int);

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 20, symbol: ?hasAlphaLayer@EndGatewayBlockActor@@UEBA_NXZ
    virtual bool hasAlphaLayer() const;

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@EndGatewayBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // symbol: ??0EndGatewayBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit EndGatewayBlockActor(class BlockPos const&);

    // symbol: ?setExitPosition@EndGatewayBlockActor@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setExitPosition(class BlockPos const&);

    // symbol: ?teleportEntity@EndGatewayBlockActor@@QEAAXAEAVActor@@@Z
    MCAPI void teleportEntity(class Actor&);

    // symbol: ?findExitPortal@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVWorldGenerator@@AEBV2@@Z
    MCAPI static class BlockPos findExitPortal(class WorldGenerator&, class BlockPos const&);

    // symbol: ?findValidSpawnAround@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@_NH@Z
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource&, class BlockPos const&, bool, int);

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
    MCAPI static int _getHighestSection(class WorldGenerator&, class BlockVolume&, class BlockPos const&);

    // NOLINTEND
};
