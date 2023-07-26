#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryReadLock {

public:
    // prevent constructor by default
    BlockTypeRegistryReadLock& operator=(BlockTypeRegistryReadLock const&) = delete;
    BlockTypeRegistryReadLock(BlockTypeRegistryReadLock const&)            = delete;
    BlockTypeRegistryReadLock()                                            = delete;

public:
    /**
     * @symbol ??1BlockTypeRegistryReadLock\@\@QEAA\@XZ
     */
    MCAPI ~BlockTypeRegistryReadLock(); // NOLINT
};
