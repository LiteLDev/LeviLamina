#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"

class BlockTypeRegistryRWLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mSharedMutex;
    ::ll::TypedStorage<8, 168, ::Bedrock::Threading::InstancedThreadLocal<bool, ::std::allocator<bool>>>
        mSharedLockIsLockedForModifications;
    ::ll::TypedStorage<8, 168, ::Bedrock::Threading::InstancedThreadLocal<bool, ::std::allocator<bool>>>
        mSharedLockIsLockedForRead;
    // NOLINTEND

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
