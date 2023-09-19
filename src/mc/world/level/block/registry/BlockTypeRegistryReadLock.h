#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryReadLock {
public:
    // prevent constructor by default
    BlockTypeRegistryReadLock& operator=(BlockTypeRegistryReadLock const&);
    BlockTypeRegistryReadLock(BlockTypeRegistryReadLock const&);
    BlockTypeRegistryReadLock();

public:
    // NOLINTBEGIN
    // symbol: ??1BlockTypeRegistryReadLock@@QEAA@XZ
    MCAPI ~BlockTypeRegistryReadLock();

    // NOLINTEND
};
