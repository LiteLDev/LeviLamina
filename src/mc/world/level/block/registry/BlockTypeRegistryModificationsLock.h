#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryModificationsLock {
public:
    // prevent constructor by default
    BlockTypeRegistryModificationsLock& operator=(BlockTypeRegistryModificationsLock const&);
    BlockTypeRegistryModificationsLock(BlockTypeRegistryModificationsLock const&);
    BlockTypeRegistryModificationsLock();

public:
    // NOLINTBEGIN
    MCAPI ~BlockTypeRegistryModificationsLock();

    // NOLINTEND
};
