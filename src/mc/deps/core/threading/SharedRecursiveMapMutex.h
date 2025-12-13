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
    virtual bool _threadHoldsSharedLock(::std::thread::id) /*override*/;

    virtual bool _shouldLockForSharedAccess(::std::thread::id) /*override*/;

    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) /*override*/;

    virtual ~SharedRecursiveMapMutex() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Threading
