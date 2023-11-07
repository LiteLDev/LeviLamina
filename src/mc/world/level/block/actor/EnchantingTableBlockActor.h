#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class EnchantingTableBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    EnchantingTableBlockActor& operator=(EnchantingTableBlockActor const&);
    EnchantingTableBlockActor(EnchantingTableBlockActor const&);
    EnchantingTableBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~EnchantingTableBlockActor() = default;

    // vIndex: 1, symbol: ?load@EnchantingTableBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@EnchantingTableBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@EnchantingTableBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 26, symbol:
    // ?getName@EnchantingTableBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
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
    // ?_getUpdatePacket@EnchantingTableBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@EnchantingTableBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??0EnchantingTableBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit EnchantingTableBlockActor(class BlockPos const&);

    // NOLINTEND
};
