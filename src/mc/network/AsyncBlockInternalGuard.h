#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncBlockInternalGuard {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCBLOCKINTERNALGUARD
public:
    AsyncBlockInternalGuard& operator=(AsyncBlockInternalGuard const&) = delete;
    AsyncBlockInternalGuard(AsyncBlockInternalGuard const&)            = delete;
    AsyncBlockInternalGuard()                                          = delete;
#endif

public:
    /**
     * @symbol ??0AsyncBlockInternalGuard\@\@QEAA\@PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI AsyncBlockInternalGuard(struct XAsyncBlock*);
};
