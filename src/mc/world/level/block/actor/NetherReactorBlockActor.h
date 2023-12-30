#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class NetherReactorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    NetherReactorBlockActor& operator=(NetherReactorBlockActor const&);
    NetherReactorBlockActor(NetherReactorBlockActor const&);
    NetherReactorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetherReactorBlockActor@@UEAA@XZ
    virtual ~NetherReactorBlockActor() = default;

    // vIndex: 1, symbol: ?load@NetherReactorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@NetherReactorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

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

    // symbol: ??0NetherReactorBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit NetherReactorBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
