#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SetItemCountFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetItemCountFunction& operator=(SetItemCountFunction const&);
    SetItemCountFunction(SetItemCountFunction const&);
    SetItemCountFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetItemCountFunction@@UEAA@XZ
    virtual ~SetItemCountFunction() = default;

    // vIndex: 1, symbol: ?apply@SetItemCountFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@SetItemCountFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
