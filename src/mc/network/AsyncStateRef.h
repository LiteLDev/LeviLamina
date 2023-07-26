#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncStateRef {

public:
    // prevent constructor by default
    AsyncStateRef& operator=(AsyncStateRef const&) = delete;
    AsyncStateRef(AsyncStateRef const&)            = delete;
    AsyncStateRef()                                = delete;

public:
    /**
     * @symbol ??1AsyncStateRef\@\@QEAA\@XZ
     */
    MCAPI ~AsyncStateRef(); // NOLINT
};
