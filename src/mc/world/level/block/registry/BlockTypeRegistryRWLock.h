#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryRWLock {
public:
    // prevent constructor by default
    BlockTypeRegistryRWLock& operator=(BlockTypeRegistryRWLock const&);
    BlockTypeRegistryRWLock(BlockTypeRegistryRWLock const&);
    BlockTypeRegistryRWLock();
};
