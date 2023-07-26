#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkInterlocker {

public:
    // prevent constructor by default
    SubChunkInterlocker& operator=(SubChunkInterlocker const&) = delete;
    SubChunkInterlocker(SubChunkInterlocker const&)            = delete;
    SubChunkInterlocker()                                      = delete;

public:
    /**
     * @symbol ?tryLock3x3xN\@SubChunkInterlocker\@\@QEAA_NAEBVSubChunkPos\@\@H\@Z
     */
    MCAPI bool tryLock3x3xN(class SubChunkPos const&, int); // NOLINT
    /**
     * @symbol ?unlock3x3xN\@SubChunkInterlocker\@\@QEAAXAEBVSubChunkPos\@\@H\@Z
     */
    MCAPI void unlock3x3xN(class SubChunkPos const&, int); // NOLINT
};
