#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CompactionStatus.h"

class CompactionListenerEnv {
public:
    // prevent constructor by default
    CompactionListenerEnv& operator=(CompactionListenerEnv const&);
    CompactionListenerEnv(CompactionListenerEnv const&);
    CompactionListenerEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompactionListenerEnv@@UEAA@XZ
    virtual ~CompactionListenerEnv() = default;

    // vIndex: 14, symbol: ?Schedule@CompactionListenerEnv@@UEAAXP6AXPEAX@Z0@Z
    virtual void Schedule(void (*function)(void*), void* arg);

    // symbol: ?setCompactionCallback@CompactionListenerEnv@@QEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
    MCAPI void setCompactionCallback(std::function<void(::CompactionStatus)> callback);

    // NOLINTEND
};
