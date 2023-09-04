#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class BeehiveBlockActor : public ::BlockActor {
public:
    // BeehiveBlockActor inner types declare
    // clang-format off
    struct Occupant;
    // clang-format on

    // BeehiveBlockActor inner types define
    struct Occupant {
    public:
        // prevent constructor by default
        Occupant& operator=(Occupant const&) = delete;
        Occupant(Occupant const&)            = delete;
        Occupant()                           = delete;

    public:
        // NOLINTBEGIN
        // symbol: ??0Occupant@BeehiveBlockActor@@QEAA@UActorDefinitionIdentifier@@VCompoundTag@@I@Z
        MCAPI Occupant(struct ActorDefinitionIdentifier, class CompoundTag, uint);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BeehiveBlockActor& operator=(BeehiveBlockActor const&) = delete;
    BeehiveBlockActor(BeehiveBlockActor const&)            = delete;
    BeehiveBlockActor()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@BeehiveBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@BeehiveBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@BeehiveBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

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

    // symbol: ?disableBeeSpawn@BeehiveBlockActor@@QEAAXXZ
    MCAPI void disableBeeSpawn();

    // symbol: ?evictAll@BeehiveBlockActor@@QEAAXAEAVBlockSource@@_N@Z
    MCAPI void evictAll(class BlockSource&, bool);

    // symbol: ?saveUserData@BeehiveBlockActor@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveUserData(class CompoundTag&) const;

    // symbol: ?tryAdmit@BeehiveBlockActor@@QEAA_NAEAVActor@@@Z
    MCAPI bool tryAdmit(class Actor&);

    // symbol: ?MAX_OCCUPANCY@BeehiveBlockActor@@2IB
    MCAPI static uint const MAX_OCCUPANCY;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_revive@BeehiveBlockActor@@AEAAPEAVActor@@AEAVBlockSource@@AEBUOccupant@1@E@Z
    MCAPI class Actor* _revive(class BlockSource&, struct BeehiveBlockActor::Occupant const&, uchar);

    // symbol: ?_tickOccupant@BeehiveBlockActor@@AEAA_NAEAVBlockSource@@AEAUOccupant@1@@Z
    MCAPI bool _tickOccupant(class BlockSource&, struct BeehiveBlockActor::Occupant&);

    // symbol: ?_trySpawnBees@BeehiveBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _trySpawnBees(class BlockSource&);

    // NOLINTEND
};
