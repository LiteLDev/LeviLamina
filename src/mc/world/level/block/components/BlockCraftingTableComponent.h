#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockCraftingTableComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockCraftingTableComponent& operator=(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCraftingTableComponent@@UEAA@XZ
    virtual ~BlockCraftingTableComponent() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol:
    // ?getLootTable@BlockLootComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getLootTable() const;

    // NOLINTEND
};
