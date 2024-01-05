#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class ConduitBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ConduitBlockActor& operator=(ConduitBlockActor const&);
    ConduitBlockActor(ConduitBlockActor const&);
    ConduitBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ConduitBlockActor@@UEAA@XZ
    virtual ~ConduitBlockActor() = default;

    // vIndex: 1, symbol: ?load@ConduitBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@ConduitBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@ConduitBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 20, symbol: ?hasAlphaLayer@ConduitBlockActor@@UEBA_NXZ
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
    // ?_getUpdatePacket@ConduitBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@ConduitBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0ConduitBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit ConduitBlockActor(class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_animateTick@ConduitBlockActor@@AEBAXAEAVBlockSource@@@Z
    MCAPI void _animateTick(class BlockSource& region) const;

    // symbol: ?_checkShape@ConduitBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _checkShape(class BlockSource& region);

    // symbol: ?_updateTarget@ConduitBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _updateTarget(class BlockSource& region);

    // NOLINTEND
};
