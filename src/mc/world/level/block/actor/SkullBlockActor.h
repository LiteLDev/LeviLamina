#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class SkullBlockActor : public ::BlockActor {
public:
    // SkullBlockActor inner types define
    enum class SkullType {};

public:
    // prevent constructor by default
    SkullBlockActor& operator=(SkullBlockActor const&);
    SkullBlockActor(SkullBlockActor const&);
    SkullBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SkullBlockActor@@UEAA@XZ
    virtual ~SkullBlockActor() = default;

    // vIndex: 1, symbol: ?load@SkullBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@SkullBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

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

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@SkullBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@SkullBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0SkullBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SkullBlockActor(class BlockPos const& pos);

    // symbol: ?getSkullType@SkullBlockActor@@QEBA?AW4SkullType@1@XZ
    MCAPI ::SkullBlockActor::SkullType getSkullType() const;

    // symbol: ?setRotation@SkullBlockActor@@QEAAXM@Z
    MCAPI void setRotation(float rot);

    // symbol: ?setSkullType@SkullBlockActor@@QEAAXH@Z
    MCAPI void setSkullType(int type);

    // NOLINTEND
};
