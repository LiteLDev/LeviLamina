#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::std::shared_mutex           mMutex;
    ::std::condition_variable_any mZeroReaders;
    ::std::atomic<uint64>         mReaderCount;
    // NOLINTEND

public:
    static const size_t mWaitForZeroBit = 1ull << 63;

    LLAPI void   lock_shared();
    LLNDAPI bool try_lock_shared();
    LLAPI void   unlock_shared();

    LLAPI void   lock();
    LLNDAPI bool try_lock();
    LLAPI void   unlock();
};

} // namespace Bedrock::Threading
