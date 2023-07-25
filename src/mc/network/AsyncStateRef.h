#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncStateRef {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCSTATEREF
public:
    AsyncStateRef& operator=(AsyncStateRef const&) = delete;
    AsyncStateRef(AsyncStateRef const&)            = delete;
    AsyncStateRef()                                = delete;
#endif

public:
    /**
     * @symbol ??1AsyncStateRef\@\@QEAA\@XZ
     */
    MCAPI ~AsyncStateRef();
};
