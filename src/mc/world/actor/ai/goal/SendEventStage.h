#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventStage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDEVENTSTAGE
public:
    SendEventStage& operator=(SendEventStage const&) = delete;
    SendEventStage(SendEventStage const&)            = delete;
    SendEventStage()                                 = delete;
#endif

public:
    /**
     * @symbol ??1SendEventStage\@\@QEAA\@XZ
     */
    MCAPI ~SendEventStage();
};
