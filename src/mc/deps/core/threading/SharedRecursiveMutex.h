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
    virtual bool _threadHoldsSharedLock(::std::thread::id) /*override*/;

    virtual bool _shouldLockForSharedAccess(::std::thread::id) /*override*/;

    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) /*override*/;

    virtual ~SharedRecursiveMutex() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_threadHoldsSharedLock(::std::thread::id);

    MCNAPI bool $_shouldLockForSharedAccess(::std::thread::id);

    MCNAPI bool $_shouldUnLockForSharedAccess(::std::thread::id);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
