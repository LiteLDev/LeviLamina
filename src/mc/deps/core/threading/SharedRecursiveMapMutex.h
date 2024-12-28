#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedRecursiveMutexBase.h"

namespace Bedrock::Threading {

class SharedRecursiveMapMutex : public ::Bedrock::Threading::SharedRecursiveMutexBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk31bb98;
    ::ll::UntypedStorage<8, 64> mUnkce3fae;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedRecursiveMapMutex& operator=(SharedRecursiveMapMutex const&);
    SharedRecursiveMapMutex(SharedRecursiveMapMutex const&);
    SharedRecursiveMapMutex();

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
    virtual ~SharedRecursiveMapMutex() /*override*/;
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
};

} // namespace Bedrock::Threading
