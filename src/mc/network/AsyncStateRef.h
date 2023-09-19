#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncStateRef {
public:
    // prevent constructor by default
    AsyncStateRef& operator=(AsyncStateRef const&);
    AsyncStateRef(AsyncStateRef const&);
    AsyncStateRef();

public:
    // NOLINTBEGIN
    // symbol: ??1AsyncStateRef@@QEAA@XZ
    MCAPI ~AsyncStateRef();

    // NOLINTEND
};
