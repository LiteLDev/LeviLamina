#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {
public:
    // prevent constructor by default
    PrioritizeSharedOwnership& operator=(PrioritizeSharedOwnership const&);
    PrioritizeSharedOwnership(PrioritizeSharedOwnership const&);
    PrioritizeSharedOwnership();

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
