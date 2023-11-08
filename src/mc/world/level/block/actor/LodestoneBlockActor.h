#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class LodestoneBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    LodestoneBlockActor& operator=(LodestoneBlockActor const&);
    LodestoneBlockActor(LodestoneBlockActor const&);
    LodestoneBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LodestoneBlockActor@@UEAA@XZ
    virtual ~LodestoneBlockActor() = default;

    // vIndex: 1, symbol: ?load@LodestoneBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@LodestoneBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@LodestoneBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?onRemoved@LodestoneBlockActor@@UEAAXAEAVBlockSource@@@Z
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
    // ?_getUpdatePacket@LodestoneBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@LodestoneBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??0LodestoneBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit LodestoneBlockActor(class BlockPos const&);

    // symbol: ?getTrackingHandle@LodestoneBlockActor@@QEBAAEBVPositionTrackingId@@XZ
    MCAPI class PositionTrackingId const& getTrackingHandle() const;

    // symbol: ?hasTrackingHandle@LodestoneBlockActor@@QEBA_NXZ
    MCAPI bool hasTrackingHandle() const;

    // symbol: ?setTrackingHandle@LodestoneBlockActor@@QEAA_NAEBVPositionTrackingId@@@Z
    MCAPI bool setTrackingHandle(class PositionTrackingId const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sTagName_Handle@LodestoneBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sTagName_Handle;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sTagName_Handle() { return sTagName_Handle; }

    // NOLINTEND
};
