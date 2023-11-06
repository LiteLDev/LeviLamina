#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/actor/BlockActor.h"

class RandomizableBlockActorContainerBase : public ::BlockActor {
public:
    // prevent constructor by default
    RandomizableBlockActorContainerBase& operator=(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase(RandomizableBlockActorContainerBase const&);
    RandomizableBlockActorContainerBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RandomizableBlockActorContainerBase@@UEAA@XZ
    virtual ~RandomizableBlockActorContainerBase();

    // vIndex: 1, symbol:
    // ?load@RandomizableBlockActorContainerBase@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@RandomizableBlockActorContainerBase@@UEBA_NAEAVCompoundTag@@@Z
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

    // symbol:
    // ?setLootTable@RandomizableBlockActorContainerBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI void setLootTable(std::string const&, int);

    // symbol:
    // ?unPackLootTable@RandomizableBlockActorContainerBase@@QEAAXAEAVLevel@@AEAVContainer@@V?$AutomaticID@VDimension@@H@@PEAVActor@@@Z
    MCAPI void unPackLootTable(class Level&, class Container&, DimensionType, class Actor*);

    // NOLINTEND
};
