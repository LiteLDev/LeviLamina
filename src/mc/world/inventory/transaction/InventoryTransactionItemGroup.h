#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionItemGroup {

public:
    // prevent constructor by default
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&) = delete;
    InventoryTransactionItemGroup()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getItemInstance\@InventoryTransactionItemGroup\@\@QEBA?AVItemStack\@\@XZ
     */
    MCAPI class ItemStack getItemInstance() const;
    /**
     * @symbol ??4InventoryTransactionItemGroup\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class InventoryTransactionItemGroup& operator=(class InventoryTransactionItemGroup const&);
    /**
     * @symbol ??1InventoryTransactionItemGroup\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransactionItemGroup();
    // NOLINTEND
};
