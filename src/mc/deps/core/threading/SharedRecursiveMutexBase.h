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
    virtual ~SharedRecursiveMutexBase() = default;

    virtual bool _threadHoldsSharedLock(::std::thread::id) = 0;

    virtual bool _shouldLockForSharedAccess(::std::thread::id) = 0;

    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
