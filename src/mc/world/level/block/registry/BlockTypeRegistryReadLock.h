#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockTypeRegistryRWLock;
// clang-format on

class BlockTypeRegistryReadLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcc491f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypeRegistryReadLock& operator=(BlockTypeRegistryReadLock const&);
    BlockTypeRegistryReadLock(BlockTypeRegistryReadLock const&);
    BlockTypeRegistryReadLock();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockTypeRegistryReadLock(::std::shared_ptr<::BlockTypeRegistryRWLock> locker);

    MCAPI ~BlockTypeRegistryReadLock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::BlockTypeRegistryRWLock> locker);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
