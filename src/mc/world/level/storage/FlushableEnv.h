#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv {
public:
    // prevent constructor by default
    FlushableEnv& operator=(FlushableEnv const&);
    FlushableEnv(FlushableEnv const&);
    FlushableEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FlushableEnv@@UEAA@XZ
    virtual ~FlushableEnv();

    // vIndex: 20, symbol: ?flushToPermanentStorage@FlushableStorageAreaEnv@@UEAAXXZ
    virtual void flushToPermanentStorage() = 0;

    // symbol: ??0FlushableEnv@@QEAA@PEAVEnv@leveldb@@@Z
    MCAPI explicit FlushableEnv(leveldb::Env* env);

    // NOLINTEND
};
