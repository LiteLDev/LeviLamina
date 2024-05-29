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
    // symbol: ?lock@PrioritizeSharedOwnership@Threading@Bedrock@@QEAAXXZ
    MCAPI void lock();

    // symbol: ?lock_shared@PrioritizeSharedOwnership@Threading@Bedrock@@QEAAXXZ
    MCAPI void lock_shared();

    // symbol: ?try_lock@PrioritizeSharedOwnership@Threading@Bedrock@@QEAA_NXZ
    MCAPI bool try_lock();

    // symbol: ?unlock@PrioritizeSharedOwnership@Threading@Bedrock@@QEAAXXZ
    MCAPI void unlock();

    // symbol: ?unlock_shared@PrioritizeSharedOwnership@Threading@Bedrock@@QEAAXXZ
    MCAPI void unlock_shared();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
