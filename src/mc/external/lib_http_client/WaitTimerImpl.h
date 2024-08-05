#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct _TP_CALLBACK_INSTANCE;
struct _TP_TIMER;
// clang-format on

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
