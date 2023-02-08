/**
 * @file  InventoryTransactionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   75985056
     * @symbol  ?_createServerSideAction\@InventoryTransactionManager\@\@QEAAXAEBVItemStack\@\@0\@Z
     */
    MCAPI void _createServerSideAction(class ItemStack const &, class ItemStack const &);
    /**
     * @hash   267679299
     * @symbol  ?_logExpectedActions\@InventoryTransactionManager\@\@QEBAXXZ
     */
    MCAPI void _logExpectedActions() const;
    /**
     * @hash   -875165999
     * @symbol  ?addAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@_N\@Z
     */
    MCAPI void addAction(class InventoryAction const &, bool);
    /**
     * @hash   1198342270
     * @symbol  ?addExpectedAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@\@Z
     */
    MCAPI void addExpectedAction(class InventoryAction const &);
    /**
     * @hash   -1823676951
     * @symbol  ?checkActionExpected\@InventoryTransactionManager\@\@QEAA_NAEBVInventoryAction\@\@\@Z
     */
    MCAPI bool checkActionExpected(class InventoryAction const &);
    /**
     * @hash   -72813505
     * @symbol  ?forceBalanceTransaction\@InventoryTransactionManager\@\@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction();
    /**
     * @hash   -234864041
     * @symbol  ??1InventoryTransactionManager\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransactionManager();

};