#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssertHandlerContext {
public:
    // prevent constructor by default
    AssertHandlerContext& operator=(AssertHandlerContext const&);
    AssertHandlerContext(AssertHandlerContext const&);
    AssertHandlerContext();

public:
    // NOLINTBEGIN
    // symbol: ??1AssertHandlerContext@@QEAA@XZ
    MCAPI ~AssertHandlerContext();

    // NOLINTEND
};
