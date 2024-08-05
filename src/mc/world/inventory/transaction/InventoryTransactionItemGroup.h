#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionItemGroup {
public:
    // prevent constructor by default
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&);
    InventoryTransactionItemGroup();

public:
    // NOLINTBEGIN
    MCAPI class ItemStack getItemInstance() const;

    MCAPI class InventoryTransactionItemGroup& operator=(class InventoryTransactionItemGroup const&);

    MCAPI ~InventoryTransactionItemGroup();

    // NOLINTEND
};
