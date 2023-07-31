#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {

public:
    // prevent constructor by default
    PrioritizeSharedOwnership& operator=(PrioritizeSharedOwnership const&) = delete;
    PrioritizeSharedOwnership(PrioritizeSharedOwnership const&)            = delete;
    PrioritizeSharedOwnership()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?lock\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void lock();
    /**
     * @symbol ?lock_shared\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void lock_shared();
    /**
     * @symbol ?try_lock\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAA_NXZ
     */
    MCAPI bool try_lock();
    /**
     * @symbol ?unlock\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void unlock();
    /**
     * @symbol ?unlock_shared\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void unlock_shared();
    // NOLINTEND
};

}; // namespace Bedrock::Threading
