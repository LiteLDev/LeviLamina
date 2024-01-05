#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/QueueRequestResult.h"

class DelayActionList {
public:
    // prevent constructor by default
    DelayActionList& operator=(DelayActionList const&);
    DelayActionList(DelayActionList const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DelayActionList@@UEAA@XZ
    virtual ~DelayActionList() = default;

    // symbol: ??0DelayActionList@@QEAA@XZ
    MCAPI DelayActionList();

    // symbol:
    // ?queueRequestOrExecuteAction@DelayActionList@@QEAA?AW4QueueRequestResult@@VDelayRequest@@AEAVServerLevel@@AEAVDimension@@_K_N@Z
    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        class DelayRequest request,
        class ServerLevel& level,
        class Dimension&   dimension,
        uint64             currentTick,
        bool
    );

    // symbol: ?tick@DelayActionList@@QEAAXAEAVServerLevel@@AEAVDimension@@_K@Z
    MCAPI void tick(class ServerLevel& level, class Dimension& dimension, uint64 currentTick);

    // NOLINTEND
};
