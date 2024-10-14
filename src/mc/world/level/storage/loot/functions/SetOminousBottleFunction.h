#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SetOminousBottleFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetOminousBottleFunction& operator=(SetOminousBottleFunction const&);
    SetOminousBottleFunction(SetOminousBottleFunction const&);
    SetOminousBottleFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetOminousBottleFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext&);

    // vIndex: 3
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext&);

    MCAPI void apply$(class ItemInstance& itemInstance, class Random& random, class LootTableContext&);

    // NOLINTEND
};
