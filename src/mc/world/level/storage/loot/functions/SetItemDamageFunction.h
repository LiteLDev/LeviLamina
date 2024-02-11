#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SetItemDamageFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetItemDamageFunction& operator=(SetItemDamageFunction const&);
    SetItemDamageFunction(SetItemDamageFunction const&);
    SetItemDamageFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetItemDamageFunction@@UEAA@XZ
    virtual ~SetItemDamageFunction() = default;

    // vIndex: 1, symbol: ?apply@SetItemDamageFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@SetItemDamageFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
