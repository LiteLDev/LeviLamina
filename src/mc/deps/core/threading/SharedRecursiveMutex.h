#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedRecursiveMutexBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class SharedRecursiveMutexBase; }
// clang-format on

namespace Bedrock::Threading {

class SharedRecursiveMutex : public ::Bedrock::Threading::SharedRecursiveMutexBase {
public:
    // prevent constructor by default
    SharedRecursiveMutex& operator=(SharedRecursiveMutex const&);
    SharedRecursiveMutex(SharedRecursiveMutex const&);
    SharedRecursiveMutex();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedRecursiveMutex();

    // vIndex: 1
    virtual bool _threadHoldsSharedLock(std::thread::id);

    // vIndex: 2
    virtual bool _shouldLockForSharedAccess(std::thread::id);

    // vIndex: 3
    virtual bool _shouldUnLockForSharedAccess(std::thread::id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool _shouldLockForSharedAccess$(std::thread::id);

    MCAPI bool _shouldUnLockForSharedAccess$(std::thread::id);

    MCAPI bool _threadHoldsSharedLock$(std::thread::id);

    // NOLINTEND
};

}; // namespace Bedrock::Threading
