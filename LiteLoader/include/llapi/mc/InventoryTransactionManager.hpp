/**
 * @file  MC/InventoryTransactionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   763461392
     * @symbol ?_createServerSideAction@InventoryTransactionManager@@QEAAXAEBVItemStack@@0@Z
     */
    MCAPI void _createServerSideAction(class ItemStack const &, class ItemStack const &);
    /**
     * @hash   175792323
     * @symbol ?_logExpectedActions@InventoryTransactionManager@@QEBAXXZ
     */
    MCAPI void _logExpectedActions() const;
    /**
     * @hash   -1733269807
     * @symbol ?addAction@InventoryTransactionManager@@QEAAXAEBVInventoryAction@@_N@Z
     */
    MCAPI void addAction(class InventoryAction const &, bool);
    /**
     * @hash   340284590
     * @symbol ?addExpectedAction@InventoryTransactionManager@@QEAAXAEBVInventoryAction@@@Z
     */
    MCAPI void addExpectedAction(class InventoryAction const &);
    /**
     * @hash   1613232665
     * @symbol ?checkActionExpected@InventoryTransactionManager@@QEAA_NAEBVInventoryAction@@@Z
     */
    MCAPI bool checkActionExpected(class InventoryAction const &);
    /**
     * @hash   -930871185
     * @symbol ?forceBalanceTransaction@InventoryTransactionManager@@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction();
    /**
     * @hash   447907239
     * @symbol ??1InventoryTransactionManager@@QEAA@XZ
     */
    MCAPI ~InventoryTransactionManager();

};