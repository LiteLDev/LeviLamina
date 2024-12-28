#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>            mMutex;
    ::ll::TypedStorage<8, 88, ::std::condition_variable_any> mZeroReaders;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>          mReaderCount;
    // NOLINTEND

public:
    // prevent constructor by default
    PrioritizeSharedOwnership& operator=(PrioritizeSharedOwnership const&);
    PrioritizeSharedOwnership(PrioritizeSharedOwnership const&);
    PrioritizeSharedOwnership();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void lock();

    MCAPI void lock_shared();

    MCAPI bool try_lock();

    MCAPI void unlock();

    MCAPI void unlock_shared();
    // NOLINTEND
};

} // namespace Bedrock::Threading
