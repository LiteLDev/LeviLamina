#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryRWLock {

public:
    // prevent constructor by default
    BlockTypeRegistryRWLock& operator=(BlockTypeRegistryRWLock const&) = delete;
    BlockTypeRegistryRWLock(BlockTypeRegistryRWLock const&)            = delete;
    BlockTypeRegistryRWLock()                                          = delete;
};
