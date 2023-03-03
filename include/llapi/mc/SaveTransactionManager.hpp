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
     * @symbol  ??0SaveTransactionManager\@\@QEAA\@AEAVWorkerPool\@\@AEAVScheduler\@\@V?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCAPI SaveTransactionManager(class WorkerPool &, class Scheduler &, class std::function<void (bool)>);
    /**
     * @symbol  ?onBeginCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onBeginCompaction();
    /**
     * @symbol  ?onEndCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onEndCompaction();

//private:
    /**
     * @symbol  ?_hideGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _hideGlobalSaveIcon();
    /**
     * @symbol  ?_showGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _showGlobalSaveIcon();

private:

};