#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DelayActionList {

public:
    // prevent constructor by default
    DelayActionList& operator=(DelayActionList const&) = delete;
    DelayActionList(DelayActionList const&)            = delete;

public:
    /**
     * @symbol ??0DelayActionList\@\@QEAA\@XZ
     */
    MCAPI DelayActionList(); // NOLINT
    /**
     * @symbol
     * ?queueRequestOrExecuteAction\@DelayActionList\@\@QEAA?AW4QueueRequestResult\@\@VDelayRequest\@\@AEAVServerLevel\@\@AEAVDimension\@\@_K_N\@Z
     */
    MCAPI enum class QueueRequestResult queueRequestOrExecuteAction(
        class DelayRequest,
        class ServerLevel&,
        class Dimension&,
        unsigned __int64,
        bool
    ); // NOLINT
    /**
     * @symbol ?tick\@DelayActionList\@\@QEAAXAEAVServerLevel\@\@AEAVDimension\@\@_K\@Z
     */
    MCAPI void tick(class ServerLevel&, class Dimension&, unsigned __int64); // NOLINT
};
