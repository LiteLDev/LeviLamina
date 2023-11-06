#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

class FlushableStorageAreaEnv : public ::FlushableEnv {
public:
    // prevent constructor by default
    FlushableStorageAreaEnv& operator=(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FlushableStorageAreaEnv() = default;

    // vIndex: 20, symbol: ?flushToPermanentStorage@FlushableStorageAreaEnv@@UEAAXXZ
    virtual void flushToPermanentStorage();

    // NOLINTEND
};
