#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetBlockHitEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETBLOCKHITEVENT
public:
    TargetBlockHitEvent& operator=(TargetBlockHitEvent const&) = delete;
    TargetBlockHitEvent()                                      = delete;
#endif

public:
    /**
     * @symbol ??0TargetBlockHitEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI TargetBlockHitEvent(struct TargetBlockHitEvent const&);
    /**
     * @symbol ??1TargetBlockHitEvent\@\@QEAA\@XZ
     */
    MCAPI ~TargetBlockHitEvent();
};
