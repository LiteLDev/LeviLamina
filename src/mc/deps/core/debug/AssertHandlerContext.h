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
    MCAPI ~AssertHandlerContext();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
