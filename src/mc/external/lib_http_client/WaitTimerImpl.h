#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimerImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OS_WAITTIMERIMPL
public:
    WaitTimerImpl& operator=(WaitTimerImpl const&) = delete;
    WaitTimerImpl(WaitTimerImpl const&)            = delete;
    WaitTimerImpl()                                = delete;
#endif

public:
    // private:
    /**
     * @symbol ?WaitCallback\@WaitTimerImpl\@OS\@\@CAXPEAU_TP_CALLBACK_INSTANCE\@\@PEAXPEAU_TP_TIMER\@\@\@Z
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE*, void*, struct _TP_TIMER*);

private:
};

}; // namespace OS
