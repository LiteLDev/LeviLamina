#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct WaitTimerImpl {
public:
    // prevent constructor by default
    WaitTimerImpl& operator=(WaitTimerImpl const&);
    WaitTimerImpl(WaitTimerImpl const&);
    WaitTimerImpl();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void WaitCallback(::_TP_CALLBACK_INSTANCE*, void*, ::_TP_TIMER*);
    // NOLINTEND
};

} // namespace OS
