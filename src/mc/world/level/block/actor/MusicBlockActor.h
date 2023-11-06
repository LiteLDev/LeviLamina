#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class MusicBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MusicBlockActor& operator=(MusicBlockActor const&);
    MusicBlockActor(MusicBlockActor const&);
    MusicBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MusicBlockActor();

    // vIndex: 1, symbol: ?load@MusicBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@MusicBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

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

    // symbol: ??0MusicBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit MusicBlockActor(class BlockPos const&);

    // symbol: ?playNote@MusicBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void playNote(class BlockSource&, class BlockPos const&);

    // symbol: ?tune@MusicBlockActor@@QEAAXXZ
    MCAPI void tune();

    // symbol: ?getInstrumentIndex@MusicBlockActor@@SA?AV?$optional@H@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<int> getInstrumentIndex(class BlockSource&, class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getInstrumentIndexForBlock@MusicBlockActor@@CAHAEBVBlockLegacy@@@Z
    MCAPI static int _getInstrumentIndexForBlock(class BlockLegacy const&);

    // NOLINTEND
};
