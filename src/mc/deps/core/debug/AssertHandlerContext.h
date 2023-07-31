#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssertHandlerContext {

public:
    // prevent constructor by default
    AssertHandlerContext& operator=(AssertHandlerContext const&) = delete;
    AssertHandlerContext(AssertHandlerContext const&)            = delete;
    AssertHandlerContext()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1AssertHandlerContext\@\@QEAA\@XZ
     */
    MCAPI ~AssertHandlerContext();
    // NOLINTEND
};
