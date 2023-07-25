#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryReadLock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRYREADLOCK
public:
    BlockTypeRegistryReadLock& operator=(BlockTypeRegistryReadLock const&) = delete;
    BlockTypeRegistryReadLock(BlockTypeRegistryReadLock const&)            = delete;
    BlockTypeRegistryReadLock()                                            = delete;
#endif

public:
    /**
     * @symbol ??1BlockTypeRegistryReadLock\@\@QEAA\@XZ
     */
    MCAPI ~BlockTypeRegistryReadLock();
};
