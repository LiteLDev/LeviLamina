#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {

class ComposedAssertMessage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGUTILS_COMPOSEDASSERTMESSAGE
public:
    ComposedAssertMessage& operator=(ComposedAssertMessage const&) = delete;
    ComposedAssertMessage(ComposedAssertMessage const&)            = delete;
    ComposedAssertMessage()                                        = delete;
#endif

public:
    /**
     * @symbol ?compose\@ComposedAssertMessage\@DebugUtils\@\@QEAAXAEBUAssertHandlerContext\@\@\@Z
     */
    MCAPI void compose(struct AssertHandlerContext const&);
    /**
     * @symbol ??1ComposedAssertMessage\@DebugUtils\@\@QEAA\@XZ
     */
    MCAPI ~ComposedAssertMessage();
};

}; // namespace DebugUtils
