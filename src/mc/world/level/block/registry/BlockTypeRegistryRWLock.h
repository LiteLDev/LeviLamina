#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryRWLock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRYRWLOCK
public:
    BlockTypeRegistryRWLock& operator=(BlockTypeRegistryRWLock const&) = delete;
    BlockTypeRegistryRWLock(BlockTypeRegistryRWLock const&)            = delete;
    BlockTypeRegistryRWLock()                                          = delete;
#endif

public:
};
