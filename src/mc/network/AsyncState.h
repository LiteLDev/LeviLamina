#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCSTATE
public:
    AsyncState& operator=(AsyncState const&) = delete;
    AsyncState(AsyncState const&)            = delete;
    AsyncState()                             = delete;
#endif

public:
    /**
     * @symbol ?Release\@AsyncState\@\@QEAAXXZ
     */
    MCAPI void Release();
};
