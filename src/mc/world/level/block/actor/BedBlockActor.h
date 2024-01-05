#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class BedBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    BedBlockActor& operator=(BedBlockActor const&);
    BedBlockActor(BedBlockActor const&);
    BedBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BedBlockActor@@UEAA@XZ
    virtual ~BedBlockActor() = default;

    // vIndex: 1, symbol: ?load@BedBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@BedBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 3, symbol: ?saveItemInstanceData@BedBlockActor@@UEAA_NAEAVCompoundTag@@@Z
    virtual bool saveItemInstanceData(class CompoundTag& tag);

    // vIndex: 7, symbol: ?tick@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 11, symbol: ?onPlace@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onPlace(class BlockSource& region);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 21, symbol: ?getCrackEntity@BedBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual class BlockActor* getCrackEntity(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 26, symbol:
    // ?getName@BedBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

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
    // ?_getUpdatePacket@BedBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@BedBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0BedBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit BedBlockActor(class BlockPos const& pos);

    // symbol: ?claimPetSleepOnBed@BedBlockActor@@QEAA_NUActorUniqueID@@@Z
    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID petId);

    // symbol: ?startSleepingOn@BedBlockActor@@QEAAXXZ
    MCAPI void startSleepingOn();

    // symbol: ?stopSleepingOn@BedBlockActor@@QEAAXAEAVBlockSource@@_N@Z
    MCAPI void stopSleepingOn(class BlockSource& region, bool forcefulAwake);

    // NOLINTEND
};
