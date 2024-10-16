#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SetDataFromColorIndexFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetDataFromColorIndexFunction& operator=(SetDataFromColorIndexFunction const&);
    SetDataFromColorIndexFunction(SetDataFromColorIndexFunction const&);
    SetDataFromColorIndexFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDataFromColorIndexFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _applyImpl(
        class Item const*& inOutItemDef,
        class Actor const* thisEntity,
        std::string const& originalItemName,
        int&               outResultAux
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
