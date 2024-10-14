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
    // vIndex: 0
    virtual ~SetItemCountFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
