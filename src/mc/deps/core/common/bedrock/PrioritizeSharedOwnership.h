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
    /**
     * @symbol ?lock\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void lock(); // NOLINT
    /**
     * @symbol ?lock_shared\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void lock_shared(); // NOLINT
    /**
     * @symbol ?try_lock\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAA_NXZ
     */
    MCAPI bool try_lock(); // NOLINT
    /**
     * @symbol ?unlock\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void unlock(); // NOLINT
    /**
     * @symbol ?unlock_shared\@PrioritizeSharedOwnership\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void unlock_shared(); // NOLINT
};

}; // namespace Bedrock::Threading
