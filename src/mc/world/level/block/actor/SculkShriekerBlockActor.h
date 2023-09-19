#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class SculkShriekerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SculkShriekerBlockActor& operator=(SculkShriekerBlockActor const&);
    SculkShriekerBlockActor(SculkShriekerBlockActor const&);
    SculkShriekerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@SculkShriekerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@SculkShriekerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?onRemoved@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
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

    // symbol: ??0SculkShriekerBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SculkShriekerBlockActor(class BlockPos const&);

    // symbol: ?tryRespond@SculkShriekerBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void tryRespond(class BlockSource&, class BlockPos const&);

    // symbol: ?tryShriek@SculkShriekerBlockActor@@QEAA_NAEAVBlockSource@@VBlockPos@@AEAVPlayer@@@Z
    MCAPI bool tryShriek(class BlockSource&, class BlockPos, class Player&);

    // symbol: ?tryGet@SculkShriekerBlockActor@@SAPEAV1@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI static class SculkShriekerBlockActor* tryGet(class BlockSource&, class BlockPos);

    // symbol: ?tryGetPlayerInHierarchy@SculkShriekerBlockActor@@SAPEAVPlayer@@PEAVActor@@@Z
    MCAPI static class Player* tryGetPlayerInHierarchy(class Actor*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canRespond@SculkShriekerBlockActor@@CA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canRespond(class BlockSource const&, class BlockPos const&);

    // NOLINTEND
};
