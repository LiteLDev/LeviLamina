#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryModificationsLock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRYMODIFICATIONSLOCK
public:
    BlockTypeRegistryModificationsLock& operator=(BlockTypeRegistryModificationsLock const&) = delete;
    BlockTypeRegistryModificationsLock(BlockTypeRegistryModificationsLock const&)            = delete;
    BlockTypeRegistryModificationsLock()                                                     = delete;
#endif

public:
    /**
     * @symbol ??1BlockTypeRegistryModificationsLock\@\@QEAA\@XZ
     */
    MCAPI ~BlockTypeRegistryModificationsLock();
};
