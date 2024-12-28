#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryRWLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk1aa754;
    ::ll::UntypedStorage<8, 168> mUnk17c690;
    ::ll::UntypedStorage<8, 168> mUnk997168;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypeRegistryRWLock& operator=(BlockTypeRegistryRWLock const&);
    BlockTypeRegistryRWLock(BlockTypeRegistryRWLock const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockTypeRegistryRWLock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
