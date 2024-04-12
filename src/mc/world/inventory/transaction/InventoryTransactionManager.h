#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionManager {
public:
    // prevent constructor by default
    InventoryTransactionManager& operator=(InventoryTransactionManager const&);
    InventoryTransactionManager(InventoryTransactionManager const&);
    InventoryTransactionManager();

public:
    // NOLINTBEGIN
    // symbol: ??0InventoryTransactionManager@@QEAA@AEAVPlayer@@@Z
    MCAPI explicit InventoryTransactionManager(class Player&);

    // symbol: ?_createServerSideAction@InventoryTransactionManager@@QEAAXAEBVItemStack@@0@Z
    MCAPI void _createServerSideAction(class ItemStack const& oldItem, class ItemStack const& newItem);

    // symbol: ?_logExpectedActions@InventoryTransactionManager@@QEBAXXZ
    MCAPI void _logExpectedActions() const;

    // symbol: ?addAction@InventoryTransactionManager@@QEAAXAEBVInventoryAction@@_N@Z
    MCAPI void addAction(class InventoryAction const& action, bool forceBalanced);

    // symbol: ?addExpectedAction@InventoryTransactionManager@@QEAAXAEBVInventoryAction@@@Z
    MCAPI void addExpectedAction(class InventoryAction const& action);

    // symbol: ?forceBalanceTransaction@InventoryTransactionManager@@QEAAXXZ
    MCAPI void forceBalanceTransaction();

    // symbol:
    // ?getCurrentTransaction@InventoryTransactionManager@@QEBAAEBV?$unique_ptr@VInventoryTransaction@@U?$default_delete@VInventoryTransaction@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class InventoryTransaction> const& getCurrentTransaction() const;

    // symbol: ?reset@InventoryTransactionManager@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?resetExpectedActions@InventoryTransactionManager@@QEAAXXZ
    MCAPI void resetExpectedActions();

    // symbol: ??1InventoryTransactionManager@@QEAA@XZ
    MCAPI ~InventoryTransactionManager();

    // NOLINTEND
};
