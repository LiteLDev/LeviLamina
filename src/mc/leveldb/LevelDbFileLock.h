#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbFileLock {
public:
    // prevent constructor by default
    LevelDbFileLock& operator=(LevelDbFileLock const&);
    LevelDbFileLock(LevelDbFileLock const&);
    LevelDbFileLock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelDbFileLock@@UEAA@XZ
    virtual ~LevelDbFileLock() = default;

    // NOLINTEND
};
