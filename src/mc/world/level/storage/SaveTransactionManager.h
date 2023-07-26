#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SaveTransactionManager {

public:
    // prevent constructor by default
    SaveTransactionManager& operator=(SaveTransactionManager const&) = delete;
    SaveTransactionManager(SaveTransactionManager const&)            = delete;
    SaveTransactionManager()                                         = delete;

public:
    /**
     * @symbol
     * ??0SaveTransactionManager\@\@QEAA\@AEAVWorkerPool\@\@AEAVScheduler\@\@V?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCAPI SaveTransactionManager(class WorkerPool&, class Scheduler&, class std::function<void(bool)>); // NOLINT
    /**
     * @symbol ?onBeginCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onBeginCompaction(); // NOLINT
    /**
     * @symbol ?onEndCompaction\@SaveTransactionManager\@\@QEAAXXZ
     */
    MCAPI void onEndCompaction(); // NOLINT

    // private:
    /**
     * @symbol ?_hideGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _hideGlobalSaveIcon(); // NOLINT
    /**
     * @symbol ?_showGlobalSaveIcon\@SaveTransactionManager\@\@AEAAXXZ
     */
    MCAPI void _showGlobalSaveIcon(); // NOLINT

private:
};
