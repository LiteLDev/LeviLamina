#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantRandomEquipmentFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    EnchantRandomEquipmentFunction& operator=(EnchantRandomEquipmentFunction const&);
    EnchantRandomEquipmentFunction(EnchantRandomEquipmentFunction const&);
    EnchantRandomEquipmentFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantRandomEquipmentFunction@@UEAA@XZ
    virtual ~EnchantRandomEquipmentFunction() = default;

    // vIndex: 1, symbol:
    // ?apply@EnchantRandomEquipmentFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol:
    // ?apply@EnchantRandomEquipmentFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
