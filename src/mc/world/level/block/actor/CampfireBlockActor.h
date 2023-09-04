#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class CampfireBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    CampfireBlockActor& operator=(CampfireBlockActor const&) = delete;
    CampfireBlockActor(CampfireBlockActor const&)            = delete;
    CampfireBlockActor()                                     = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@CampfireBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@CampfireBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@CampfireBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 8, symbol: ?onChanged@CampfireBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: ?getShadowRadius@CampfireBlockActor@@UEBAMAEAVBlockSource@@@Z
    virtual float getShadowRadius(class BlockSource&) const;

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
    // ?_getUpdatePacket@CampfireBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@CampfireBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ?dropAllItems@CampfireBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void dropAllItems(class BlockSource&);

    // symbol: ?getCampfireTag@CampfireBlockActor@@QEBAAEBVHashedString@@AEBVBlockSource@@@Z
    MCAPI class HashedString const& getCampfireTag(class BlockSource const&) const;

    // symbol: ?getCookingItem@CampfireBlockActor@@QEAAAEBVItemInstance@@H@Z
    MCAPI class ItemInstance const& getCookingItem(int);

    // symbol: ?setItem@CampfireBlockActor@@QEAA_NAEAVBlockSource@@AEBVItemInstance@@@Z
    MCAPI bool setItem(class BlockSource&, class ItemInstance const&);

    // symbol: ?MAX_SMOKE_THRESHOLD_COUNTER@CampfireBlockActor@@2HB
    MCAPI static int const MAX_SMOKE_THRESHOLD_COUNTER;

    // symbol: ?MIN_SMOKE_THRESHOLD_COUNTER@CampfireBlockActor@@2HB
    MCAPI static int const MIN_SMOKE_THRESHOLD_COUNTER;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_finishCooking@CampfireBlockActor@@AEAAXAEAVBlockSource@@H@Z
    MCAPI void _finishCooking(class BlockSource&, int);

    // NOLINTEND
};
