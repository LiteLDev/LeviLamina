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
    MCAPI ~BlockTypeRegistryReadLock();

    // NOLINTEND
};
