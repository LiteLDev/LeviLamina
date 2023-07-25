#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionItemGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONITEMGROUP
public:
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&) = delete;
    InventoryTransactionItemGroup()                                     = delete;
#endif

public:
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
};
