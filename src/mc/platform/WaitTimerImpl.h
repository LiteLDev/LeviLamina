#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct WaitTimerImpl {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void WaitCallback(::_TP_CALLBACK_INSTANCE*, void*, ::_TP_TIMER*);
    // NOLINTEND
};

} // namespace OS
