#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

namespace Bedrock::Threading {

class PrioritizeDefault {
public:
    // PrioritizeDefault inner types define
    using ReaderCountType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>   mLock;
    ::ll::TypedStorage<1, 1, ::std::hash<::std::thread::id>> mThreadHasher;
    ::ll::TypedStorage<8, 8, uint64 const>                   mNoThreadId;
    ::ll::TypedStorage<8, 8, uint64>                         mOwnerThread;
    ::ll::TypedStorage<8, 8, uint64>                         mReadCount;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>     mWriteQueue;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>     mReadQueue;
    // NOLINTEND
};

} // namespace Bedrock::Threading
