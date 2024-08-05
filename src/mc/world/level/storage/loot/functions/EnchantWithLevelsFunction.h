#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantWithLevelsFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    EnchantWithLevelsFunction& operator=(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantWithLevelsFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 2
    virtual int
    apply(class ItemStack& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // vIndex: 4
    virtual int
    apply(class ItemInstance& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // NOLINTEND
};
