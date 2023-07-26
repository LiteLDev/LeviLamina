/**
 * @file  InventoryTransactionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryTransactionManager.
 *
 */
class InventoryTransactionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONMANAGER
public:
    class InventoryTransactionManager& operator=(class InventoryTransactionManager const &) = delete;
    InventoryTransactionManager(class InventoryTransactionManager const &) = delete;
    InventoryTransactionManager() = delete;
#endif

public:
    /**
     * @symbol  ?_createServerSideAction\@InventoryTransactionManager\@\@QEAAXAEBVItemStack\@\@0\@Z
     */
    MCAPI void _createServerSideAction(class ItemStack const &, class ItemStack const &);
    /**
     * @symbol  ?_logExpectedActions\@InventoryTransactionManager\@\@QEBAXXZ
     */
    MCAPI void _logExpectedActions() const;
    /**
     * @symbol  ?addAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@_N\@Z
     */
    MCAPI void addAction(class InventoryAction const &, bool);
    /**
     * @symbol  ?addExpectedAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@\@Z
     */
    MCAPI void addExpectedAction(class InventoryAction const &);
    /**
     * @symbol  ?checkActionExpected\@InventoryTransactionManager\@\@QEAA_NAEBVInventoryAction\@\@\@Z
     */
    MCAPI bool checkActionExpected(class InventoryAction const &);
    /**
     * @symbol  ?forceBalanceTransaction\@InventoryTransactionManager\@\@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction();
    /**
     * @symbol  ??1InventoryTransactionManager\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransactionManager();

};