#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockTypeRegistryRWLock;
// clang-format on

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
    MCAPI explicit BlockTypeRegistryModificationsLock(::std::shared_ptr<::BlockTypeRegistryRWLock> locker);

    MCAPI ~BlockTypeRegistryModificationsLock();
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
