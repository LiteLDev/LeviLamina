#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"

class CompactionListenerEnv {
public:
    // prevent constructor by default
    CompactionListenerEnv& operator=(CompactionListenerEnv const&);
    CompactionListenerEnv(CompactionListenerEnv const&);
    CompactionListenerEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompactionListenerEnv() = default;

    // vIndex: 14
    virtual void Schedule(void (*function)(void*), void* arg);

    MCAPI explicit CompactionListenerEnv(leveldb::Env* env);

    MCAPI void setCompactionCallback(std::function<void(::CompactionStatus)> callback);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(leveldb::Env* env);

    MCAPI void Schedule$(void (*function)(void*), void* arg);

    // NOLINTEND
};
