#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedRecursiveMutexBase.h"

namespace Bedrock::Threading {

class SharedRecursiveMutex : public ::Bedrock::Threading::SharedRecursiveMutexBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk2c8389;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedRecursiveMutex& operator=(SharedRecursiveMutex const&);
    SharedRecursiveMutex(SharedRecursiveMutex const&);
    SharedRecursiveMutex();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool _threadHoldsSharedLock(::std::thread::id) /*override*/;

    // vIndex: 2
    virtual bool _shouldLockForSharedAccess(::std::thread::id) /*override*/;

    // vIndex: 3
    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) /*override*/;

    // vIndex: 0
    virtual ~SharedRecursiveMutex() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_threadHoldsSharedLock(::std::thread::id);

    MCAPI bool $_shouldLockForSharedAccess(::std::thread::id);

    MCAPI bool $_shouldUnLockForSharedAccess(::std::thread::id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
