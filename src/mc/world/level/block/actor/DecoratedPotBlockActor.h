#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class DecoratedPotBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    DecoratedPotBlockActor& operator=(DecoratedPotBlockActor const&);
    DecoratedPotBlockActor(DecoratedPotBlockActor const&);
    DecoratedPotBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DecoratedPotBlockActor() = default;

    // vIndex: 1, symbol: ?load@DecoratedPotBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@DecoratedPotBlockActor@@UEBA_NAEAVCompoundTag@@@Z
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

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@DecoratedPotBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@DecoratedPotBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??0DecoratedPotBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit DecoratedPotBlockActor(class BlockPos const&);

    // symbol:
    // ?getSherdNames@DecoratedPotBlockActor@@QEBAAEBV?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@XZ
    MCAPI std::array<std::string, 4> const& getSherdNames() const;

    // symbol:
    // ?saveSherdsToTag@DecoratedPotBlockActor@@SAXAEAVCompoundTag@@AEBV?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@@Z
    MCAPI static void saveSherdsToTag(class CompoundTag&, std::array<std::string, 4> const&);

    // symbol: ?tryGet@DecoratedPotBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class DecoratedPotBlockActor* tryGet(class BlockSource&, class BlockPos const&);

    // symbol:
    // ?tryGetSherdsFromTag@DecoratedPotBlockActor@@SA?AV?$optional@V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@@std@@AEBVCompoundTag@@@Z
    MCAPI static std::optional<std::array<std::string, 4>> tryGetSherdsFromTag(class CompoundTag const&);

    // symbol:
    // ?DEFAULT_SHERD_LIST@DecoratedPotBlockActor@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@B
    MCAPI static std::array<std::string, 4> const DEFAULT_SHERD_LIST;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_resetSherdItemNames@DecoratedPotBlockActor@@IEAAXXZ
    MCAPI void _resetSherdItemNames();

    // NOLINTEND
};
