#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemTiming {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYSTEMTIMING
public:
    SystemTiming& operator=(SystemTiming const&) = delete;
    SystemTiming(SystemTiming const&)            = delete;
    SystemTiming()                               = delete;
#endif

public:
    /**
     * @symbol ??1SystemTiming\@\@QEAA\@XZ
     */
    MCAPI ~SystemTiming();
};
