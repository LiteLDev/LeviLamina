#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SaveTransactionManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVETRANSACTIONMANAGER
public:
    SaveTransactionManager& operator=(SaveTransactionManager const&) = delete;
    SaveTransactionManager(SaveTransactionManager const&)            = delete;
    SaveTransactionManager()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ??0SaveTransactionManager\@\@QEAA\@AEAVWorkerPool\@\@AEAVScheduler\@\@V?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCAPI SaveTransactionManager(class WorkerPool&, class Scheduler&, class std::function<void(bool)>);
    /**
     * @symbol ?onBeginCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onBeginCompaction();
    /**
     * @symbol ?onEndCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onEndCompaction();

    // private:
    /**
     * @symbol ?_hideGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _hideGlobalSaveIcon();
    /**
     * @symbol ?_showGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _showGlobalSaveIcon();

private:
};
