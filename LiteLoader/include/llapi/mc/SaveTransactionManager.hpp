/**
 * @file  SaveTransactionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -546186960
     * @symbol  ??0SaveTransactionManager\@\@QEAA\@AEAVWorkerPool\@\@AEAVScheduler\@\@V?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCAPI SaveTransactionManager(class WorkerPool &, class Scheduler &, class std::function<void (bool)>);
    /**
     * @hash   1799540259
     * @symbol  ?onBeginCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onBeginCompaction();
    /**
     * @hash   1779718963
     * @symbol  ?onEndCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onEndCompaction();

//private:
    /**
     * @hash   -1322600886
     * @symbol  ?_hideGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _hideGlobalSaveIcon();
    /**
     * @hash   -137579387
     * @symbol  ?_showGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _showGlobalSaveIcon();

private:

};