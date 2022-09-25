/**
 * @file  SaveTransactionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SaveTransactionManager.
 *
 */
class SaveTransactionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVETRANSACTIONMANAGER
public:
    class SaveTransactionManager& operator=(class SaveTransactionManager const &) = delete;
    SaveTransactionManager(class SaveTransactionManager const &) = delete;
    SaveTransactionManager() = delete;
#endif

public:
    /**
     * @hash   28383408
     * @symbol ??0SaveTransactionManager@@QEAA@AEAVWorkerPool@@AEAVScheduler@@V?$function@$$A6AX_N@Z@std@@@Z
     */
    MCAPI SaveTransactionManager(class WorkerPool &, class Scheduler &, class std::function<void (bool)>);
    /**
     * @hash   -1921056557
     * @symbol ?onBeginCompaction@SaveTransactionManager@@QEAAXXZ
     */
    MCAPI void onBeginCompaction();
    /**
     * @hash   -1940877853
     * @symbol ?onEndCompaction@SaveTransactionManager@@QEAAXXZ
     */
    MCAPI void onEndCompaction();

//private:
    /**
     * @hash   -748076646
     * @symbol ?_hideGlobalSaveIcon@SaveTransactionManager@@AEAAXXZ
     */
    MCAPI void _hideGlobalSaveIcon();
    /**
     * @hash   436867973
     * @symbol ?_showGlobalSaveIcon@SaveTransactionManager@@AEAAXXZ
     */
    MCAPI void _showGlobalSaveIcon();

private:

};