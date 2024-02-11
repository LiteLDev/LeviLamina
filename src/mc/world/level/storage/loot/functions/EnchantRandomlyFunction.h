#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantRandomlyFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    EnchantRandomlyFunction& operator=(EnchantRandomlyFunction const&);
    EnchantRandomlyFunction(EnchantRandomlyFunction const&);
    EnchantRandomlyFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantRandomlyFunction@@UEAA@XZ
    virtual ~EnchantRandomlyFunction() = default;

    // vIndex: 1, symbol: ?apply@EnchantRandomlyFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@EnchantRandomlyFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
