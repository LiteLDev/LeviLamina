#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class SharedRecursiveMutexBase {
public:
    // prevent constructor by default
    SharedRecursiveMutexBase& operator=(SharedRecursiveMutexBase const&);
    SharedRecursiveMutexBase(SharedRecursiveMutexBase const&);
    SharedRecursiveMutexBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedRecursiveMutexBase() = default;

    // vIndex: 1
    virtual bool _threadHoldsSharedLock(std::thread::id) = 0;

    // vIndex: 2
    virtual bool _shouldLockForSharedAccess(std::thread::id) = 0;

    // vIndex: 3
    virtual bool _shouldUnLockForSharedAccess(std::thread::id) = 0;

    MCAPI void lock();

    MCAPI void unlock();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
