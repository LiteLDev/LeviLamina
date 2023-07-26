#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetBlockHitEvent {

public:
    // prevent constructor by default
    TargetBlockHitEvent& operator=(TargetBlockHitEvent const&) = delete;
    TargetBlockHitEvent()                                      = delete;

public:
    /**
     * @symbol ??0TargetBlockHitEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI TargetBlockHitEvent(struct TargetBlockHitEvent const&); // NOLINT
    /**
     * @symbol ??1TargetBlockHitEvent\@\@QEAA\@XZ
     */
    MCAPI ~TargetBlockHitEvent(); // NOLINT
};
