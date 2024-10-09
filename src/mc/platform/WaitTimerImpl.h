#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimerImpl {
public:
    // prevent constructor by default
    WaitTimerImpl& operator=(WaitTimerImpl const&);
    WaitTimerImpl(WaitTimerImpl const&);
    WaitTimerImpl();

    // private:
    // NOLINTBEGIN
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE*, void*, struct _TP_TIMER*);

    // NOLINTEND
};

}; // namespace OS
