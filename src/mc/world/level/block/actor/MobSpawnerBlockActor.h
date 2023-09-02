#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class MobSpawnerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MobSpawnerBlockActor& operator=(MobSpawnerBlockActor const&) = delete;
    MobSpawnerBlockActor(MobSpawnerBlockActor const&)            = delete;
    MobSpawnerBlockActor()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@MobSpawnerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@MobSpawnerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@MobSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?onRemoved@MobSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource&);

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

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
    // ?_getUpdatePacket@MobSpawnerBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@MobSpawnerBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??0MobSpawnerBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI MobSpawnerBlockActor(class BlockPos const&);

    // symbol: ?getSpawner@MobSpawnerBlockActor@@QEAAAEAVBaseMobSpawner@@XZ
    MCAPI class BaseMobSpawner& getSpawner();

    // symbol: ?setMob@MobSpawnerBlockActor@@QEAAXAEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@@Z
    MCAPI void setMob(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*);

    // NOLINTEND
};
