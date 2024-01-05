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
        Occupant& operator=(Occupant const&);
        Occupant(Occupant const&);
        Occupant();

    public:
        // NOLINTBEGIN
        // symbol: ??0Occupant@BeehiveBlockActor@@QEAA@UActorDefinitionIdentifier@@VCompoundTag@@I@Z
        MCAPI
        Occupant(struct ActorDefinitionIdentifier actorIdentifier, class CompoundTag saveData, uint ticksLeftToStay);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BeehiveBlockActor& operator=(BeehiveBlockActor const&);
    BeehiveBlockActor(BeehiveBlockActor const&);
    BeehiveBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BeehiveBlockActor@@UEAA@XZ
    virtual ~BeehiveBlockActor() = default;

    // vIndex: 1, symbol: ?load@BeehiveBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@BeehiveBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@BeehiveBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

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
    MCAPI void evictAll(class BlockSource& region, bool angry);

    // symbol: ?saveUserData@BeehiveBlockActor@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveUserData(class CompoundTag& tag) const;

    // symbol: ?tryAdmit@BeehiveBlockActor@@QEAA_NAEAVActor@@@Z
    MCAPI bool tryAdmit(class Actor& actor);

    // symbol: ?MAX_OCCUPANCY@BeehiveBlockActor@@2IB
    MCAPI static uint const MAX_OCCUPANCY;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_revive@BeehiveBlockActor@@AEAAPEAVActor@@AEAVBlockSource@@AEBUOccupant@1@E@Z
    MCAPI class Actor*
    _revive(class BlockSource& region, struct BeehiveBlockActor::Occupant const& occupant, uchar spawnDirection);

    // symbol: ?_tickOccupant@BeehiveBlockActor@@AEAA_NAEAVBlockSource@@AEAUOccupant@1@@Z
    MCAPI bool _tickOccupant(class BlockSource& region, struct BeehiveBlockActor::Occupant& occupant);

    // symbol: ?_trySpawnBees@BeehiveBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _trySpawnBees(class BlockSource& region);

    // NOLINTEND
};
