#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncState {
public:
    // prevent constructor by default
    AsyncState& operator=(AsyncState const&);
    AsyncState(AsyncState const&);
    AsyncState();

public:
    // NOLINTBEGIN
    // symbol: ?Release@AsyncState@@QEAAXXZ
    MCAPI void Release();

    // NOLINTEND
};
