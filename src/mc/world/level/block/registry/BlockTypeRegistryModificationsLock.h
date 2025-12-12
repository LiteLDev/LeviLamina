#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryModificationsLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb60fac;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypeRegistryModificationsLock& operator=(BlockTypeRegistryModificationsLock const&);
    BlockTypeRegistryModificationsLock(BlockTypeRegistryModificationsLock const&);
    BlockTypeRegistryModificationsLock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockTypeRegistryModificationsLock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
