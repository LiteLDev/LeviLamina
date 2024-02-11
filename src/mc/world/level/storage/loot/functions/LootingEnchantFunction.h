#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class LootingEnchantFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    LootingEnchantFunction& operator=(LootingEnchantFunction const&);
    LootingEnchantFunction(LootingEnchantFunction const&);
    LootingEnchantFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LootingEnchantFunction@@UEAA@XZ
    virtual ~LootingEnchantFunction() = default;

    // vIndex: 1, symbol: ?apply@LootingEnchantFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@LootingEnchantFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
