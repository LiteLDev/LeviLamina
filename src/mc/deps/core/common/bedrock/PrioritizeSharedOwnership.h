#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {
public:
    static const uint64_t mWaitForZeroBit = 0x8000000000000000; // constant

    std::shared_mutex           mMutex;              // this+0x0
    std::condition_variable_any mZeroReaders;        // this+0x8
    std::atomic_uint64_t        mReaderCount;        // this+0x60
    uint64_t                    mWaitingWriterCount; // this+0x68

public:
    // NOLINTBEGIN
    MCAPI void lock();

    MCAPI void lock_shared();

    MCAPI bool try_lock();

    MCAPI void unlock();

    MCAPI void unlock_shared();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
