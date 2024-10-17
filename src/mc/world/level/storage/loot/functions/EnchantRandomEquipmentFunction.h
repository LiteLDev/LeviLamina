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
    // vIndex: 0
    virtual ~EnchantRandomEquipmentFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
