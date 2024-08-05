#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SmeltItemFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SmeltItemFunction& operator=(SmeltItemFunction const&);
    SmeltItemFunction(SmeltItemFunction const&);
    SmeltItemFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmeltItemFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
