#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class SharedRecursiveMutexBase : public ::std::shared_mutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdaa45e;
    ::ll::UntypedStorage<4, 4> mUnk904537;
    ::ll::UntypedStorage<8, 8> mUnk7dbf45;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedRecursiveMutexBase& operator=(SharedRecursiveMutexBase const&);
    SharedRecursiveMutexBase(SharedRecursiveMutexBase const&);
    SharedRecursiveMutexBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedRecursiveMutexBase() = default;

    // vIndex: 1
    virtual bool _threadHoldsSharedLock(::std::thread::id) = 0;

    // vIndex: 2
    virtual bool _shouldLockForSharedAccess(::std::thread::id) = 0;

    // vIndex: 3
    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
