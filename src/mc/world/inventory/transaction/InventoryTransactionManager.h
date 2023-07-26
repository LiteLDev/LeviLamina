#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionManager {

public:
    // prevent constructor by default
    InventoryTransactionManager& operator=(InventoryTransactionManager const&) = delete;
    InventoryTransactionManager(InventoryTransactionManager const&)            = delete;
    InventoryTransactionManager()                                              = delete;

public:
    /**
     * @symbol ?_createServerSideAction\@InventoryTransactionManager\@\@QEAAXAEBVItemStack\@\@0\@Z
     */
    MCAPI void _createServerSideAction(class ItemStack const&, class ItemStack const&); // NOLINT
    /**
     * @symbol ?_logExpectedActions\@InventoryTransactionManager\@\@QEBAXXZ
     */
    MCAPI void _logExpectedActions() const; // NOLINT
    /**
     * @symbol ?addAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@_N\@Z
     */
    MCAPI void addAction(class InventoryAction const&, bool); // NOLINT
    /**
     * @symbol ?addExpectedAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@\@Z
     */
    MCAPI void addExpectedAction(class InventoryAction const&); // NOLINT
    /**
     * @symbol ?forceBalanceTransaction\@InventoryTransactionManager\@\@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction(); // NOLINT
    /**
     * @symbol ??1InventoryTransactionManager\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransactionManager(); // NOLINT
};
