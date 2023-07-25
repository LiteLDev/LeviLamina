#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkInterlocker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKINTERLOCKER
public:
    SubChunkInterlocker& operator=(SubChunkInterlocker const&) = delete;
    SubChunkInterlocker(SubChunkInterlocker const&)            = delete;
    SubChunkInterlocker()                                      = delete;
#endif

public:
    /**
     * @symbol ?tryLock3x3xN\@SubChunkInterlocker\@\@QEAA_NAEBVSubChunkPos\@\@H\@Z
     */
    MCAPI bool tryLock3x3xN(class SubChunkPos const&, int);
    /**
     * @symbol ?unlock3x3xN\@SubChunkInterlocker\@\@QEAAXAEBVSubChunkPos\@\@H\@Z
     */
    MCAPI void unlock3x3xN(class SubChunkPos const&, int);
};
