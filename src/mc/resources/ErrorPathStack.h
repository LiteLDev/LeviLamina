#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ErrorPathStack {
public:
    // prevent constructor by default
    ErrorPathStack& operator=(ErrorPathStack const&);
    ErrorPathStack(ErrorPathStack const&);
    ErrorPathStack();

public:
    // NOLINTBEGIN
    // symbol: ??1ErrorPathStack@@QEAA@XZ
    MCAPI ~ErrorPathStack();

    // NOLINTEND
};
