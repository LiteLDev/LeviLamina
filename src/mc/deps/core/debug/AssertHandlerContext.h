#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssertHandlerContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASSERTHANDLERCONTEXT
public:
    AssertHandlerContext& operator=(AssertHandlerContext const&) = delete;
    AssertHandlerContext(AssertHandlerContext const&)            = delete;
    AssertHandlerContext()                                       = delete;
#endif

public:
    /**
     * @symbol ??1AssertHandlerContext\@\@QEAA\@XZ
     */
    MCAPI ~AssertHandlerContext();
};
