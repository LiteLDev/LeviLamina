#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryModificationsLock {

public:
    // prevent constructor by default
    BlockTypeRegistryModificationsLock& operator=(BlockTypeRegistryModificationsLock const&) = delete;
    BlockTypeRegistryModificationsLock(BlockTypeRegistryModificationsLock const&)            = delete;
    BlockTypeRegistryModificationsLock()                                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1BlockTypeRegistryModificationsLock\@\@QEAA\@XZ
     */
    MCAPI ~BlockTypeRegistryModificationsLock();
    // NOLINTEND
};
