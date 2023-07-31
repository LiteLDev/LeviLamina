#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncBlockInternalGuard {

public:
    // prevent constructor by default
    AsyncBlockInternalGuard& operator=(AsyncBlockInternalGuard const&) = delete;
    AsyncBlockInternalGuard(AsyncBlockInternalGuard const&)            = delete;
    AsyncBlockInternalGuard()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0AsyncBlockInternalGuard\@\@QEAA\@PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI AsyncBlockInternalGuard(struct XAsyncBlock*);
    // NOLINTEND
};
