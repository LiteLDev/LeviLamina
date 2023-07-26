#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncState {

public:
    // prevent constructor by default
    AsyncState& operator=(AsyncState const&) = delete;
    AsyncState(AsyncState const&)            = delete;
    AsyncState()                             = delete;

public:
    /**
     * @symbol ?Release\@AsyncState\@\@QEAAXXZ
     */
    MCAPI void Release(); // NOLINT
};
