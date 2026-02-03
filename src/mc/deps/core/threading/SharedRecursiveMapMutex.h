#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedRecursiveMutexBase.h"
#include "mc/platform/threading/Mutex.h"

namespace Bedrock::Threading {

class SharedRecursiveMapMutex : public ::Bedrock::Threading::SharedRecursiveMutexBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                   mSharedMapLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::thread::id, uint>> mSharedRecursionCounts;
    // NOLINTEND

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
